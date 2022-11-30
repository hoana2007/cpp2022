#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void nhap(float &,float &);

void giaibpt(float,float);

int main()

{
float a,b;
char c;
do
{ 
nhap(a,b);
giaibpt(a,b);
fflush(stdin);
cout<<"\nTiep tuc ? (c/k):"; cin>>c;
}while ((c=='c')||(c=='C'));
return 0;
}

void nhap(float &a, float &b)

{cout<<"Nhap cac he so a, b :"; cin>>a>>b;

}

void giaibpt(float a, float b)

{if(a>0)cout<<"Nghiem x>"<<-b/a;

else if(a<0)cout<<"Nghiem x<"<<-b/a;

     else if(b>0) cout<<"Vo so nghiem";

          else cout<<"Vo nghiem";

}

