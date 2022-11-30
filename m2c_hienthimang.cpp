#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
#define ROW 5 //So dong
#define COL 2 // So cot

int main() 
{
	int a[ROW][COL]={};
	
	for (int i=0; i < ROW; i++)
	{
		for (int j=0; j < COL; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = "; cin >>a[i][j];
			//a[i][j]= rand()%100;
		}
	}
	cout<<setw(10);
	//Phan tu dong 2 cot 1;
	cout<<"Phan du dong 2, cot 2 la: "<<a[2][1];
	cout<<endl;
	for (int i=0; i < ROW; i++)
	{
		for (int j=0; j < COL; j++)
		{
			cout << a[i][j] << setw(10);
		}
		cout <<endl;
	}
	return 0;
}
