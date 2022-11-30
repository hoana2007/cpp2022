#include <iostream>
#include <iomanip>
#include <cstdlib> //Thu vien ngau nhien
#include <ctime> //Thoi gian he thong

using namespace std;
#define max 10

int main(int argc, char** argv) {
	
	int a[max];
	
	srand(time(0));
	cout<<"Khoi tao mang ngau nhien"<<endl;
	for (int i=0; i<10; i++){
		//Gia tri ngau nhien tu 1 den 10;
		a[i]= rand() % 10+1;
	}

	cout<<"Hien thi mang len man hinh"<<setw(10)<<endl;
	
	for (int i=0; i<10; i++){
		cout <<a[i]<<setw(10)<<endl;
	}
	
	return 0;
}
