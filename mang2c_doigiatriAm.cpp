//Thay doi gia tri Am bang gia tri tuyet doi
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
			a[i][j] = (rand()%10)-5;
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
void ThayDoiGiaTriAmBangTriTuyetDoi(int a[][MAX], int dong, int cot)
{
	int n = dong * cot;
	for(int i = 0; i < n; i++)
	{
		//a[i / cot][i % cot] = (a[i / cot][i % cot] < 0 ? abs(a[i / cot][i % cot]) : a[i / cot][i % cot]);
		if(a[i / cot][i % cot] < 0)
			a[i / cot][i % cot] = abs(a[i / cot][i % cot]);
	}
}
int main()
{
	int a[MAX][MAX], dong, cot;
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	
	void ThayDoiGiaTriAmBangTriTuyetDoi(int a[][MAX], int dong, int cot);
	
	cout<<"Da thay:\n";
	XuatMang(a, dong, cot);
	
	cout<<"\n";
	system("PAUSE");
	return 0;
}
