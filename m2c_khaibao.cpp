#include <iostream>
#include <iomanip>
using namespace std;
#define soDong 3
#define soCot 3
int main(int argc, char** argv) {
	int bnsd=0;
	int t=0;
	
	int a[soDong][soCot]=
	{
		{3,5,6},
		{6,8,9},
		{10,3,1}
	};
	
	t=soDong*soCot;
	bnsd=t*sizeof(int);
	
	cout<<"so luong phan tu: "<<t<<endl;
	cout<<"Bo nho da su dung: "<<bnsd<<endl;
	
	//Hien thi gia tri cho cac phan tu trong mang
	cout<<setw(5);
	int Tong=0;
	for(int i=0; i<soDong; i++)
	{
		for(int j=0; j<soCot; j++)
		{
			//cout<<"a["<<i<<"]["<<j<<"] = ";
			cout<<a[i][j]<<setw(5);
			Tong = Tong + a[i][j];
		}
		cout<<endl;
	}
	cout<<"Tong tinh duoc la: "<<Tong<<endl;
	return 0;
}
