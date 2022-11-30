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
		cin>>a[i];
		//a[i] = rand()%100 +1;
	}
	cout<<"HIEN THI MANG: "<<endl;
	for (int i=0; i<n; i++)
		cout<<a[i]<<setw(10);
	
	int x= 0;
	int b[n]={}; //khoi tao mang luu cac so nguyen to;
	cout<<endl;
	cout<<"HIEN THI CAC SO NGUYEN TO TRONG MANG: "<<endl;
	for (int i=0; i<n; i++){
		int d=0;
		if((a[i]==2)||(a[i]==3)){
			d=0;
		} 
		else{
			for (int j=2; j <= sqrt(a[i]); j++) 
				if(a[i] % j == 0) d = 1;
		}
		if (d == 0){
			b[x] = a[i];
			x++;
		} 
		//else cout<< a[i]<<"Khong la nguyen to"<<endl;
	}

	for(int i=0; i<x; i++){
		cout<<b[i]<<setw(10);
	}
	cout<<endl;
	return 0;	
}

