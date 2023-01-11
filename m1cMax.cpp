#include <bits/stdc++.h>
#define N 100
using namespace std;
int main()
{
	int a[N] = {};
	int n, max = 0;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	cout<<"Nhap gia tri cho cac phan tu trong mang a: "<<endl;
	for(int i = 0; i <= n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	//Tim min
	max = a[0];
	for(int i = 1; i <= n; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	cout<<"Phan tu nho nhat: "<<max<<endl;
	return 0;
}