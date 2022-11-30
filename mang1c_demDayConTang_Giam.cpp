#include<bits/stdc++.h>
#define max 100
using namespace std;

void demDayConTang(int a[], int n)
{
	int dem;
	for (int i=0; i<n-1; i++)
	{
		dem = 0;
		while(a[i]<a[i+1])
		{
			if (dem == 0) 
				cout<<a[i]<<a[i+1];
			else
				cout<<a[i+1];
			i++;
			dem ++;
		}
		cout<<endl;	
	}
}
void nhapMang(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		a[i] = rand()%90 - 30;
	}
}	
void xuatMang(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<a[i]<<setw(5);
	}
}	
///Chuong trinh chinh
int main()
{
	srand((unsigned int)time(NULL));
	int a[100];
	int n;
	cout<<"Nhap n = "; cin>>n;
	nhapMang(a,n);
	cout<<"Mang truoc khi sap xep: "<<endl;
	xuatMang(a,n);
	cout<<endl;
	demDayConTang(a,n);
	return 0;
}

