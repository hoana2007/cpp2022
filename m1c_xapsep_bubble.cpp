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
	cout<<endl;
	//Doan chuong trinh sap xep
	int tg = 0;
	for (int i=0; i<n; i++){
		for (int j = i; j<i; j++){
			if (a[i] < a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	cout<<"MANG SAU KHI SAP XEP"<<endl;
	for (int i=0; i<n; i++)
		cout<<a[i]<<setw(10);
	cout<<endl;
	return 0;	
}
