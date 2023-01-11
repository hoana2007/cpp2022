#include <bits/stdc++.h>
#define max 100
using namespace std;
int main()
{
	//Khai bao mang
	int a[max] = {};
	int n, dchan = 0, dle = 0;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	cout<<"Nhap gia tri cho cac phan tu trong mang a: "<<endl;
	for(int i = 0; i <= n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
		if (a[i] % 2 == 0)
			dchan++;
		else
			dle++;
	}

	cout<<"So luong so chan: "<<dchan<<endl;
	cout<<"So luong so le: "<<dle<<endl;
	return 0;
}
