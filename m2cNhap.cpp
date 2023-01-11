#include <bits/stdc++.h>
#define socot 100
#define sodong 100
using namespace std;
int main()
{
	int cot, dong;
	int a[socot][sodong] = {};
	cout<<"Nhap cot: ";
	cin>>cot;
	cout<<"Nhap dong: ";
	cin>>dong;
	srand(time(0));
	long tong;
	for(int i = 0; i <= cot; i++)
		for (int j = 0; j <= dong; j++)
		{
			a[i][j]	= rand() % 100;
			tong += a[i][j];
		}
	cout<<setw(5);
	for(int i = 0; i <= cot; i++)
	{
		for (int j = 0; j <= dong; j++)
		{
			cout<<a[i][j]<<setw(5);
		}
		cout<<endl;
	}
	cout<<"tong cac phan tu trong ma tran: "<<tong;
	return 0;
}

