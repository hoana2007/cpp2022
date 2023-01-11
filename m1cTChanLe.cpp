#include <bits/stdc++.h>
#define max 100
using namespace std;
int main()
{
	//Khai bao mang
	int a[max] = {};
	int n, Tchan = 0, Tle = 0;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	cout<<"Nhap gia tri cho cac phan tu trong mang a: "<<endl;
	for(int i = 0; i <= n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
		if (i % 2 == 0)
			Tchan = Tchan + a[i];
		else
			Tle = Tle + a[i];
	}
	cout<<"Tong chan: "<<Tchan<<endl;
	cout<<"Tong le: "<<Tle<<endl;
	if (Tchan > Tle)
		cout<<"Tong chan lon hon tong le";
	else
		cout<<"Tong le lon hon tong chan";
	
	return 0;
}
