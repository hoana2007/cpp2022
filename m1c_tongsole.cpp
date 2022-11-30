#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <math.h>

#define n 10

using namespace std;

//Khoi tao mang ngau nhien cac so am

int main() {
	
	int a[n]={};

	srand(time(NULL));
	for(int i=0; i<n; i++){
		//cin>>a[i];
		a[i] = rand()%100 +1;
	}
	cout<<"HIEN THI MANG: "<<endl;
	for (int i=0; i<n; i++)
		cout<<a[i]<<setw(10);
	int x= 0;
	cout<<endl;
	
	for (int i=0; i<n; i++){
		//tinh tong
		if(a[i] % 2 == 1) x=x+a[i];
	}
	cout<<"TONG CAC PHAN TU CO GIA TRI LE TRONG MANG: "<<x<<endl;
	cout<<endl;
	return 0;	
}
