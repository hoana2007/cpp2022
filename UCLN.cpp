#include <iostream>
using namespace std;
int ucln(int a, int b);
int ucln(int a, int b)
{
	if(a==b)
		return b;
	else 
	{
		if (a>b) a = a-b;
		else b = b-a;
	}
	return ucln(a,b);
}

int main(int argc, char** argv) 
{
	int a,b;
	cout<<"Nhap a va b: ";
	cin>>a>>b;
	cout<<"UCLN cua "<<a<<" va "<<b<<" = "<<ucln(a,b);
	return 0;
}
