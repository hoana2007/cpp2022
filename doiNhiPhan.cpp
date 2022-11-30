#include <iostream>
using namespace std;
long doiNhiPhan(int a);

long doiNhiPhan(int a)
{
	long b;
	if ( a==0)
		return 0;
	else b = a%2;
	return doiNhiPhan(a/2)*10+b;
}

int main(int argc, char** argv) 
{
	long n;
	cout<<"Nhap n = "; cin >>n;
	cout<<"Day nhi phan la: "<<doiNhiPhan(n);
	return 0;
}
