#include <bits/stdc++.h>
using namespace std;
int main()
{
	//Liet ke cac uoc le cua N
	long n, i;
	cout<<"Nhap vao N: "; 
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		if ((n % i == 0) && (i % 2 == 1))
		{
			//Lenh liet ke
			cout<<i<<"   ";
		}
	}

	return 0;
}