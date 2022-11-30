//Tong cac so tren 1 dong
#include <iostream>
#include <iomanip>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include<math.h>
#define MAX 100
using namespace std;

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
	srand(time(0));
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			a[i][j] = rand()%100*0.1;
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
/* Vi du:
n = 6.9
phannguyen = (int)(6.9) = 6
phan le = 6.9 - 6 = 0.9

*/
void ThaySoGanNhat(float &n)
{
	int phannguyen = (int)(n);
	float phanle = n - phannguyen;
	// làm tròn
	if(phanle <= 0.5)      
	{
		n = (float)phannguyen;
	}
	else
	{
		n = (float)phannguyen + 1;
	}
}
void ThayPhanTu(float a[][MAX], int dong, int cot)
{
	int n = dong * cot;
	for(int i = 0; i < n; i++)
	{
		ThaySoGanNhat(a[i / cot][i % cot]);
	}
}
int main()
{
	float a[MAX][MAX];
	int dong, cot;
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	
	ThayPhanTu(a, dong, cot);
	cout<<"Mang sau khi thay the: \n";
	XuatMang(a, dong, cot);
	cout<<"\n";
	system("PAUSE");
	return 0;
}
