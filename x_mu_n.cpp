#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int i = 1;
	int n = 0;
	int x = 0;
	long y = 1;
	cout<<"nhap gia tri cua x va n:  ";
	cin>>x>>n;
	do
	{
		y=y*x;
		i++;
	}while(i<=n);
	
	cout<<"tong gia tri nhan duoc la:     "<<y<<endl;
	return 0;
}
