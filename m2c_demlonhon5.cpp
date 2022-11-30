#include <iostream>
#include <iomanip>
using namespace std;
#define m 3
#define n 3

int main() {
	int d;
	int B [m][n]= {};

	//Nhap du lieu cho mang B
	for(int i=0;i<m;i++)
		for(int y=0;y<n;y++)
			{
				cout<<"B["<<i<<"]["<<y<<"] = ";
				cin>>B[i][y];
			}
	//Hien thi mang va dem
	cout<<setw(5);	
	for(int i=0;i<m;i++)
	{
		for(int y=0;y<n;y++)
			{
				cout<<B[i][y]<<setw(5);
				if(B[i][y]>5)d++;
			}
		cout<<endl;
	}
	cout<<"So luong phan lon hon 5 :"<<d<<endl;
	
	return 0;
}
