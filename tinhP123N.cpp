//Tinh P - 1.2.3.4.5...(2n+1);
#include <iostream>
using namespace std;
long tinhP(int n)
{
	if (n ==0)
		return 1;
	else 
		return (2*n+1)*tinhP(n-1);
}
int main()
{
	int n;
	cout<<"Nhap n = "; cin>>n;
	cout<<"P = "<<tinhP(n);
	return 0;
}
