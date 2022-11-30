//Dem so luong nguyen to
#include <iostream>
#include <iomanip>
#include<math.h>
#define MAX 100
using namespace std;
void NhapMang(int a[][MAX], int &dong, int &cot);
void XuatMang(int a[][MAX], int dong, int cot);
int kiemTraNguyenTo(int n);
int demNguyenTo(int a[][MAX], int dong, int cot);
void NhapMang(int a[][MAX], int &dong, int &cot)
{
	do
	{
		cout<<"Nhap so dong: ";
		cin>>dong;

		if(dong < 1 || dong > MAX)
		{
			cout<<"\nSo dong khong hop le. Xin kiem tra lai!";
		}

	}while(dong < 1 || dong > MAX);
	do
	{
		cout<<"Nhap so cot: ";
		cin>>cot;

		if(cot < 1 || cot > MAX)
		{
			cout<<"\nSo cot khong hop le. Xin kiem tra lai!";
		}
	}while(cot < 1 || cot > MAX);
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			cout<<"\nNhap a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}

void XuatMang(int a[][MAX], int dong, int cot)
{
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			cout<<a[i][j]<<setw(4);
		}
			cout<<"\n\n";
	}
}
int kiemTraNguyenTo(int n)
{
	if(n < 2)
	{
		return 0;
	}
	else if(n > 2)
	{
		if(n % 2 == 0)
		{
			return 0;
		}
		for(int i = 3; i < n; i += 2)
		{
			if(n % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}
int demNguyenTo(int a[][MAX], int dong, int cot)
{
	int dem = 0;
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			if(kiemTraNguyenTo(a[i][j]) == 1)
			{
				dem++;
			}
		}
	}
	return dem;
}
int main()
{
	int a[MAX][MAX], dong, cot;
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	int m = demNguyenTo(a,dong,cot);
	cout<<"So luong so nguyen to la: "<<m;
	system("PAUSE");
	return 0;
}
