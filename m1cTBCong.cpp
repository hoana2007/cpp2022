#include <bits/stdc++.h>
#define max 100
using namespace std;
int main()
{
	//Khai bao mang
	int a[max] = {};
	int n, tong = 0;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	cout<<"Nhap gia tri cho cac phan tu trong mang a: "<<endl;
	for(int i = 0; i <= n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	for(int i = 0; i<= n; i++)
	{
		tong = tong + a[i];
	}
	cout<<"Tong gia tri cac phan tu = "<<tong<<endl;
	cout<<"Trung binh cong = "<<(float(tong)/(n+1));
	return 0;
}
