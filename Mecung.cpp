#include<winbgim.h>
#include<iostream>
#include<vector>
#include<windows.h>
#include<fstream>
#include<math.h>

using namespace std;

#define KeyUp  GetAsyncKeyState( VK_UP ) & 0x8000
#define KeyDown  GetAsyncKeyState( VK_DOWN ) & 0x8000
#define KeyLeft  GetAsyncKeyState( VK_LEFT ) & 0x8000
#define KeyRight  GetAsyncKeyState( VK_RIGHT ) & 0x8000
#define KeySpace  GetAsyncKeyState( VK_SPACE ) & 0x8000
#define KeyEscape  GetAsyncKeyState( VK_ESCAPE ) & 0x8000

int width = 500;
int height = 500;
float camD = 0.84;
int high = 150;
const char *inputdata = "MecungData.input";

struct Line
{
    int x,y,z,h,w;
    int X,Y,H,W;
    float scale;
    Line () {x = y = z = 0;}
    void Project(int camX, int camY, int camZ)
    {
        if (z - camZ <= 0)
        {
            z = camZ+1;
        }
        scale = camD/(z-camZ);
        X = (1 + scale*(x-camX))*width/2;
        Y = (1 - scale*(y-camY))*height/2;
        H = scale*h*height/2;
        W = scale*w*width/2;
    }
};

struct Wall
{
    Line line1,line2; //world
    int X1,Y1,H1,X2,Y2,H2; //screen
    void NewWall(int x1,int y1,int z1,int x2,int y2,int z2)
    {
        line1.h = line2.h = abs(y1 - y2);
        line1.x = x1; line1.y = y1 + line1.h/2;line1.z = z1;
        line2.x = x2; line2.y = y2 - line2.h/2;line2.z = z2;
    }
    void Project(int camX, int camY, int camZ)
    {
        line1.Project(camX,camY,camZ);
        X1 = line1.X;Y1 = line1.Y;H1 = line1.H;
        line2.Project(camX,camY,camZ);
        X2 = line2.X;Y2 = line2.Y;H2 = line2.H;
    }
};

void DrawQuad(int c, int x1,int y1,int h1,int x2,int y2,int h2)
{
    setfillstyle(1,c);
    setcolor(c);
    int arr[] = {x1,y1+h1/2,x1,y1-h1/2,x2,y2-h2/2,x2,y2+h2/2};
    fillpoly(4,arr);
}

vector<Wall> walls;
vector<int> data;

int LoadData()
{
    ifstream fileInput(inputdata);

    if (fileInput.fail())
    {
        cout << "Failed to load data!" << endl;
        return -1;
    }
    cout << "Loaded data!" << endl;
    while (!fileInput.eof())
    {
        int n;
        fileInput >> n;
        data.push_back(n);
    }
    fileInput.close();
    return 0;
}

void GetMap()
{
    int N = data.size();
    for (int i = 0; i < N/4;i++)
    {
        int j = i*4;
        Wall wall;
        wall.NewWall(data[j],0,data[j+1],data[j+2],high,data[j+3]);
        walls.push_back(wall);
    }
}

int RotateX(int x0,int z0,int x,int z)
{
    int x1 = z0 - z;
    int z1 = x - x0;
    x = x0 + x1;
    return x;
}
int RotateZ(int x0,int z0,int x,int z)
{
    int x1 = z0 - z;
    int z1 = x - x0;
    z = z0 + z1;
    return z;
}
void RotateMap(int alpha,int x0,int z0)
{
    int N = walls.size();
    for (int i = 0;i < N;i++)
    {
        for (int n = 0; n < alpha / 90;n++)
        {
            int x1 = RotateX(x0,z0,walls[i].line1.x,walls[i].line1.z);
            int x2 = RotateX(x0,z0,walls[i].line2.x,walls[i].line2.z);
            int z1 = RotateZ(x0,z0,walls[i].line1.x,walls[i].line1.z);
            int z2 = RotateZ(x0,z0,walls[i].line2.x,walls[i].line2.z);
            walls[i].NewWall(x1,0,z1,x2,high,z2);
        }
    }
}

bool CrossWall(int z1,int z2)
{
    int N = walls.size();
    for (int i = 0; i < N;i++)
    {
        Wall wall = walls[i];
        if (wall.line1.x*wall.line2.x >= 0) continue;
        if ((z2 - wall.line1.z)*(z1 - wall.line2.z) <= 0) return true;
    }
    return false;
}

void DrawMap2D(int pos)
{
    cleardevice();
    int N = walls.size();
    for (int i = 0;i < N;i++)
    {
        Wall wall = walls[i];
        setcolor(4);
        line(width/2+wall.line1.x/5,height/2-wall.line1.z/5 + pos/5,width/2+wall.line2.x/5,height/2-wall.line2.z/5+pos/5);
        setcolor(2);
        ellipse(width/2,height/2,0,360,3,3);
    }
    do
    {
        delay(50);
    }
    while (!KeySpace);
}

void Draw3D(int camX,int camY,int camZ)
{
    int N = walls.size();
    delay(150);
    cleardevice();
    for (int i = 0;i < N;i++)
    {
        Wall wall = walls[i];
        if (wall.line1.z < camZ && wall.line2.z < camZ) continue;
        wall.Project(0,camY,camZ);
        DrawQuad(6,wall.X1,wall.Y1,wall.H1,wall.X2,wall.Y2,wall.H2);
    }
}

int main()
{
    int pos = -100;
    int camY = high/2;
    bool gameopen = true;
    if (LoadData() == -1) return 0;
    GetMap();
    initwindow(width,height);
    Draw3D(0,camY,pos);
    while (gameopen)
    {
        delay(50);
        bool keypress = false;
        if (KeyUp && !CrossWall(pos,pos+10)) {pos += 10;keypress = true;}
        if (KeyDown  && !CrossWall(pos,pos-10)) {pos -= 10;keypress = true;}
        if (KeyLeft) {RotateMap(270,0,pos); keypress = true;}
        if (KeyRight){RotateMap(90,0,pos);keypress = true;}
        if (KeySpace) DrawMap2D(pos);
        if (keypress) Draw3D(0,camY,pos);
        if (KeyEscape) gameopen = false;
    }
    closegraph();
    return 0;
}
