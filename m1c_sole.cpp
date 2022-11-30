#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#define n 100

using namespace std;

//Khoi tao mang ngau nhien cac so am

int main() {
	
	int a[n]={};

	srand(time(NULL));
	for(int i=0; i<n; i++){
		a[i] = rand() +1;
	}
	cout<<"HIEN THI MANG: "<<endl;
	for (int i=0; i<n; i++)
		cout<<a[i]<<setw(10);
	
	int d=0;
	cout<<endl;
	cout<<"HIEN THI CAC SO LE TRONG MANG: "<<endl;
	for (int j=0; j<n; j++){
		if(a[j]%2 == 1){
			cout<<a[j]<<setw(10);
			d++;	
		}
	}
	cout<<endl;
	cout<<"CO TAT CA: "<<d<<" SO LE";
	
	return 0;	
}
