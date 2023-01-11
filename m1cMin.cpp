#include <bits/stdc++.h>
#define max 100
using namespace std;
int main()
{
	int a[max] = {};
	int n, min = 0;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	cout<<"Nhap gia tri cho cac phan tu trong mang a: "<<endl;
	for(int i = 0; i <= n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	//Tim min
	min = a[0];
	for(int i = 1; i <= n; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	
	cout<<"Phan tu nho nhat: "<<min<<endl;
			
	return 0;
}