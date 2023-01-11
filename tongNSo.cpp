#include <bits/stdc++.h>
using namespace std;
int main()
{
	float T;
	int n;
	T = 0;
	cout<<"Nhap n = ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		T = T + 1.0/(2*i);
	}
	cout<<"Tong T = "<< T;
	return 0;
}