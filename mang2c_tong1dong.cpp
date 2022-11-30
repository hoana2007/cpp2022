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
			a[i][j] = rand()%10+1;
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
int tong_1_Dong(int a[][MAX], int dongMoi, int cot)
{
	int tong =0;
	for(int j = 0; j< cot; j++)
		tong = tong + a[dongMoi][j];
	return tong;
}
int main()
{
	int a[MAX][MAX], dong, cot;
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	int dongMoi;
	cout<<"Nhap dong muon tinh tong: "; cin>>dongMoi;
	
	int tongDong = tong_1_Dong(a,dongMoi,cot);
	cout<<"Tong cac so tren dong "<<dongMoi<<" = "<<tongDong;
	cout<<"\n";
	system("PAUSE");
	return 0;
}
