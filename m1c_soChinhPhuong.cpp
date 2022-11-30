#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <math.h>

#define n 5

using namespace std;

//Khoi tao mang ngau nhien cac so am

int main() {
	
	int a[n]={};

	srand(time(NULL));
	for(int i=0; i<n; i++){
		cin>>a[i];
		//a[i] = rand()%100 +1;
	}
	cout<<"HIEN THI MANG: "<<endl;
	for (int i=0; i<n; i++)
		cout<<a[i]<<setw(10);
	
	int x= 0;
	int b[n]={}; //khoi tao mang luu cac so nguyen to;
	cout<<endl;
	
	for (int i=0; i<n; i++){
		int d=0;
		for (int j=1; j<=a[i]; j++){
			if(j*j == a[i]){
				b[x] = a[i];
				x++;
			}
		}
	}
	cout<<"HIEN THI CAC SO CHINH PHUONG TRONG MANG: "<<endl;
	for(int i=0; i<x; i++){
		cout<<b[i]<<setw(10);
	}
	cout<<endl;
	return 0;	
}

