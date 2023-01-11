#include <bits/stdc++.h>
using namespace std;
int main()
{
	//Tìm Tổng ước của N
	long n, i, tong;
	tong = 0;
	cout<<"Nhap vao N: "; 
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			tong = tong + i;
		}
	}
	cout<<"Tong cac uoc cua N = "<<tong;
	return 0;
}