#include <bits/stdc++.h>
#define max 100
using namespace std;
int main()
{
	int a[max] = {};
	int n, dem = 0;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	cout<<"Nhap gia tri cho cac phan tu trong mang a: "<<endl;
	for(int i = 0; i <= n; i++)
	{
		a[i] = rand() % 100;
    }
    for(int i = 0; i <= n; i++)
    {
        cout<<a[i]<<setw(5);
    }

	return 0;
}