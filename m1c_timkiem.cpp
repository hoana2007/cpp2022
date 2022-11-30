#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <math.h>

#define n 05

using namespace std;

//Khoi tao mang ngau nhien cac so am

int main() {
	
	int a[n]={};

	srand(time(NULL));
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		//a[i] = rand()%100 +1;
	}
	cout<<"HIEN THI MANG: "<<endl;
	for (int i=0; i<n; i++)
		cout<<a[i]<<setw(10);
	cout<<endl;
	//so can tim: 
	int k = 0;
	int dem = 0;
	int b[n]={};
	cout<<"NHAP K: = ";
	cin>>k;
	cout<<&k;
	//Doan chuong trinh tim kiem
	for (int i=0; i<n; i++)
	{
		if(a[i] == k) 
			b[dem] = i;
			dem++;
	}
	for (int j=0; j<=dem; j++)
	{
		cout<<"Cac vi tri tim thay la: "<<b[j]<<setw(10)<<endl;
	}
	cout<<endl;
	return 0;	
}
