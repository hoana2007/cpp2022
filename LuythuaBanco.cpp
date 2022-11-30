#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long luythua(int n)
{
	long t = 1;
	for (int i=0; i<n; i++)
		t = t*n;
	return t;
}

int main(int argc, char** argv) {
	int i,n;
	long long s;
	cout<<"Nhap n:= "; cin>>n;
	cout<<"luy thua = "<<luythua(n);
	//for (i=0; i<n; i++)
	//	s = s
	return 0;
}
