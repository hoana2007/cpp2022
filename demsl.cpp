#include <iostream>
using namespace std;
int dsl(int n)
{
	if (n==0)
	{
		return 0;
	}
	return 1+dsl(n/10);
}
int main()
{
	int n;
	cout<<"moi ban nhap n";
	cin>>n;
	cout<<dsl(n);
	return 0;
}
