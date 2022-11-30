#include<bits/stdc++.h>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <iostream>
#include <stdio.h>
#include<io.h>
#include <cstdlib>
#include <ctime>
#include<string>
using namespace std;
int testdau=1,testcuoi;
string path_folder="D:\\THU NGHIEM\\",
folder="chiabay",
path1=path_folder+folder,
path=path_folder+folder+"\\",
baseFolderName = "test",
fi="\\chiabay.inp",
fo="\\chiabay.out";
void sinhmang(int bd,int kt)
{ srand(time(NULL));
testdau=bd;
testcuoi=kt;
mkdir(path1.c_str());
for (int i =testdau;i <=testcuoi;i++)
{ ostringstream folderName;
folderName << baseFolderName << i;
mode_t mode = 0;
string p=path+folderName.str();
mkdir(p.c_str());
string n1=path+folderName.str()+fi;
freopen(n1.c_str(),"w",stdout);
/*long long batdau=1,ketthuc=50;
n=rand()%(kethuc–batdau + 1) + batdau;
*/
long long n=100;
cout<<n<<endl;
long long a=1,b=50;
for(int i=1;i<=n;i++)
cout<<rand()%(b-a+1)+a<<" ";
}
 
}
void sinhxau(int bd,int kt)
{ srand(time(NULL));
testdau=bd;
testcuoi=kt;
mkdir(path1.c_str());
string xaus="abcdefghijklmnopqrstuvwxyz";
for (int i =testdau;i <=testcuoi;i++)
{ ostringstream folderName;
folderName << baseFolderName << i;
mode_t mode = 0;
string p=path+folderName.str();
mkdir(p.c_str());
string n1=path+folderName.str()+fi;
freopen(n1.c_str(),"w",stdout);
/*long long batdau=1,ketthuc=50;
n=rand()%(kethuc–batdau + 1) + batdau;
*/
long long n=1000;
for(int hh=1;hh<=n; hh++)
{
cout << xaus[rand()% xaus.length()];
}
}
}
using namespace std;
int main()
{
sinhxau(1,9);
for(int mm=1;mm<=testcuoi;mm++)
{ ostringstream folderName;
folderName << baseFolderName <<mm;
mode_t mode = 0;
string nn1=path+folderName.str()+fi;
freopen(nn1.c_str(),"r",stdin);
string mmmm=path+folderName.str()+fo;
freopen(mmmm.c_str(),"w",stdout);
//chen code chuong trinh o day
 
}
return 0;
}