#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#define n 10

using namespace std;

//Khoi tao mang ngau nhien cac so am

int main() {
	
	int a[n]={0};
		
	srand(time(NULL));
	
	for (int i=0; i<n; i++){
		a[i] = (-1)*rand()%10+1;
	}
	cout<<"Hien thi len man hinh: "<<endl;
	cout<<setw(10);
	for (int i=0; i<n; i++){
		cout<<a[i]<<setw(10)<<endl;
	}
	return 0;
}
