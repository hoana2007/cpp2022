#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	cout<<"heng";
	float f1=0,f2=0;
	double f3=0;
	int n;
	cout<<"Nhap n = ";		cin>>n;

	for (int i=1; i<=n; i++)	
	{
		f1 += i;
		f2 += i*i;
		f3 += 1.0/(2*i+1);
		cout<<f3<<endl;
	}
	cout<<"F1 = "<<f1<<endl;
	cout<<"F2 = "<<f2<<endl;
	cout<<"F3 = "<<f3<<endl;
	return 0;
}
