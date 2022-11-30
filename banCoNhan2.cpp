#include <iostream>
#include <iomanip>
using namespace std;
#define Max 100
long long hatGaoThuN(int n)
{
	if (n == 1)
		return 1;
	else 
		return 2*hatGaoThuN(n-1);
}
int main()
{
	long long tongSoHatGao = 0;
	
	int n;
	
	cout<<"Nhap n = "; cin>>n;
	cout<<hatGaoThuN(n);
	for (int i = 1; i<=n; i++)
	{
		tongSoHatGao = tongSoHatGao + hatGaoThuN(i);
		cout<<"tong thu "<<i<<" = "<<tongSoHatGao<<endl;
	}
	cout<<"So hat gao: S = "<<setw(10)<<tongSoHatGao;
    return 0;
}
