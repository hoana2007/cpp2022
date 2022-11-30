//Chu so dau tien cua n
#include <iostream>

using namespace std;

int chuSoDauTien(int n)
{
	if(n<10)
		return n;
	else 
		return chuSoDauTien(n/10);
}
int main()
{
	int a;
	cout<<"Nhap a = ";
	cin >> a;
	cout<<"Chu so dau tien cua a la: "<<chuSoDauTien(a);
	return 0;
}
