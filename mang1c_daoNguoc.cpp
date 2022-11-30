#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#define max 100
using namespace std;
void hoanVi(int &a, int &b)
{
	int temp = a;
		a = b;
		b = temp;
}
void daoNguoc(int a[], int n)
{
	for (int i=0; i<n/2; i++)
	{
		hoanVi(a[i], a[n-i-1]);
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
	daoNguoc(a,n);
	cout<<"Mang sau khi sap xep: "<<endl;
	xuatMang(a,n);
	return 0;
}

