#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int thuesuat;
    float luong, sothue, luongrong = 0;
    cout << "Nhap so tien luong : ";
    cin >> luong;
    if(luong > 15)
    {
        sothue = luong * 30 / 100;
        thuesuat = 30;
    }
    else if(luong >= 7)
    {
        sothue = luong * 20 / 100;
        thuesuat = 20;
    }
    else
    {
        sothue = luong * 10 / 100;
        thuesuat = 10;
    }
    luongrong = luong - sothue;
    cout << "Luong = " << luong << endl;
    cout << "Thue thu nhap voi muc thue suat " << thuesuat << "% = " << sothue << endl;
    cout << "So tien luong ban nhan la = " << luongrong << endl;
    return 0;
}
