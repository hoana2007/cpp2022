#include <iostream>
#include <iomanip>
#include<math.h>
#define MAX 100
using namespace std;
void NhapMang(int a[][MAX], int &dong, int &cot);
void XuatMang(int a[][MAX], int dong, int cot);
int KiemTra(int a[][MAX], int dong, int cot);
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
int KiemTra(int a[][MAX], int dong, int cot)
{
	//Kiem tra phan tu chan va nho hon 2015
	int flag = 0;
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			if((a[i][j] % 2 == 0)&&(a[i][j]< 2015))
				flag = 1;
		}
	}
	return 1;
}
int main()
{
	int a[MAX][MAX], dong, cot;
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	
	int checkNum = KiemTra(a, dong, cot);
	if(checkNum != 1)
		cout<<"Khong co gia tri nao thoa man";
	else 
		cout <<"Co ton tai phan tu thoa man";
	
	system("PAUSE");
	return 0;
}
