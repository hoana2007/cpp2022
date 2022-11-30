#include<iostream>
//#include<conio.h>
using namespace std;
main()
{ 
    int a[50][50];
    int m,n,i,j;
    cout<<"nhap so hang n="; cin>>n;
    cout<<"nhap so cot m="; cin>>m;
    cout<<"nhap vao ma tran:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
// in ra ma tran vua nhap duoi dang bang
    cout<<"ma tran vua nhap la:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<" "<<a[i][j];
        }
    cout<<"\n";
    }
//sap xep hang 2 trong mang theo chieu giam dan
    int tg,k;
    for(j=0;j<m-1;j++)
    {
        for(k=j+1;k<m;k++)
        {
            if(a[1][j]<a[1][k])
            {    
                tg=a[1][j];
                a[1][j]=a[1][k];
                a[1][j]=tg;
            }
        }
    }
    cout<<"\nma tran vua sap xep hang 2 la\n";
    for(j=0;j<m;j++)
    {
        cout<<a[1][j];
    }
// Dua ra man hinh tong cac phan tu ma tran
    int s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            s=s+a[i][j];
        }
    }    
    cout<<"\ntong cac phan tu la: "<<s;
// gia tri nho nhat chia het cho 3 trong mang
    int min, kt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]%3==0)
            {    
                min=a[i][j];
                kt=1;
                break;
            }
        }
    }
    if(kt==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0; j<m; j++)
            {
                if((a[i][j]%3==0)&&(a[i][j]<min))
                {
                    min=a[i][j];
                }
            }
        }
    cout<<"\nso nho nhat trong cac so chia het cho 3 co trong day la %d"<< min;
    }
    else    
    {
        cout<<" trong mang vua nhap khong co so chia het cho 3";
    }
    return 0;
}
