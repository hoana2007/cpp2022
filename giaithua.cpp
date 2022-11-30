#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int i = 1;
	int N = 0;
	int y = 1;
	cout<<"nhap gia tri cua N:"<<endl;
	cin>>N;
	while(i<=N)
	{
		y = y*i;
		i++;
	}
	cout<<"tong gia tri nhan duoc la:"<<y<<endl;
	
	return 0;
}
