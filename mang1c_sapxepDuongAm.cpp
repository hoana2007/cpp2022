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
void sapXepDuongTangAmGiam(int a[], int n)
{
	for (int i=0; i<n-1; i++)
	{
		for (int j = i+1; j<n; j++)
		{
			if(a[j] > 0 && a[i]>0)
			{
				if(a[i] > a[j])
					hoanVi(a[i], a[j]);
			}
			if(a[j] < 0 && a[i]<0)
			{
				if(a[j] < a[j])
					hoanVi(a[i], a[j]);
			}
		}
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
	srand(time(NULL));
	int a[100];
	int n;
	cout<<"Nhap n = "; cin>>n;
	nhapMang(a,n);
	cout<<"Mang truoc khi sap xep: "<<endl;
	xuatMang(a,n);
	cout<<endl;
	sapXepDuongTangAmGiam(a,n);
	cout<<"Mang sau khi sap xep: "<<endl;
	xuatMang(a,n);
	return 0;
}

