//Tong cac so tren 1 dong
#include <iostream>
#include <iomanip>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include<math.h>
#define MAX 100
using namespace std;

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
	srand(time(0));
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			cin>>a[i][j];// = rand()%100;
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
int ktSoHoanThien(int n)
{
	int tong = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			tong = tong + i;
	}
	if(tong == n)
		return 1;
	return 0;
}
int tongSoHoanThien(int a[][MAX], int dong, int cot)
{
	int tong = 0;
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			if(ktSoHoanThien(a[i][j]) == 1)
				tong = tong + a[i][j];
		}
	}
	return tong;
}
void hienSoHoanThien(int a[][MAX], int dong, int cot, int &dem)
{
	cout<<"So hoan thien la: ";
	for(int i = 0; i < dong; i ++)
		for(int j = 0; j < cot; j++)
		{
			if(ktSoHoanThien(a[i][j]) == 1)
			{
				cout<<a[i][j]<<" ";
				dem ++;
			}
		}
}
int main()
{
	int a[MAX][MAX];
	int dong, cot, soLuong;
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	hienSoHoanThien(a,dong,cot, soLuong);
	cout<<"So luong so hoan thien: "<<soLuong<<endl;
	cout<<"Tong cac so hoan thien la: "<<tongSoHoanThien(a,dong,cot);
	
	cout<<"\n";
	system("PAUSE");
	return 0;
}
