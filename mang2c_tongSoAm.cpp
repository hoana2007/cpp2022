//Dem so luong nguyen to
#include <iostream>
#include <iomanip>
#include<math.h>
#define MAX 100
using namespace std;
void NhapMang(float a[][MAX], int &dong, int &cot);
void XuatMang(float a[][MAX], int dong, int cot);

void NhapMang(float a[][MAX], int &dong, int &cot)
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
void XuatMang(float a[][MAX], int dong, int cot)
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
float tongSoAm(float a[][MAX], int dong, int cot)
{
	float tong = 0;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if(a[i][j] < 0)
			{
				tong += a[i][j];
			}
		}
	}
	return tong;
}
int main()
{
	float a[MAX][MAX];
	int dong, cot;
	NhapMang(a,dong,cot);
	XuatMang(a,dong,cot);
	float tongAm = tongSoAm(a,dong,cot);
	cout<<"Tong cac so am = "<<tongAm;
	return 0;
}
