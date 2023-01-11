#include <bits/stdc++.h>
using namespace std;
int main()
{
	//Dem so luong uoc so chan cua N
	long n, i, dem;
	dem = 0;
	cout<<"Nhap vao N: "; 
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		if ((n % i == 0) && (i % 2 == 0))
		{
			dem += 1;
			//cout<<i<<"   ";
		}
	}
	cout<<"So luong uoc chan cua N = "<<dem;
	return 0;
}