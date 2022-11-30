#include <iostream>
#include <iomanip>
//Tao ngau nhien
#include <cstdlib>
#include <time.h>
using namespace std;

#define Max 10

int main() {

	int mang1[Max];
	
	int dayA[5]={35, 43, 65, 87, 92};
	string hoten[] = {"Nguyen", "Van", "A"};
	
	//cout<<"Hien thi phan tu trong mang dayA: "<<endl;
	//cout<<"phan tu thu 0: "<<setw(20)<<dayA[0]<<endl;
	//cout<<"Kich thuoc mang: "<<sizeof(hoten)/sizeof(hoten[0]);
	
	dayA[1]=5000;
	for (int y=0; y<5; y++){
		cout<<dayA[y]<<setw(10);
	}
		
	
	/*srand( time(NULL) );
	
	cout <<"Nhap gia tri cho mang: ";
	for (int i=1; i<=Max; i++){
		cout <<"phan tu thu: "<<i<<"---"; 
		mang1[i] = rand();
	}
	
	cout<<"Xuat mang: ";
	for (int i=1; i<=Max; i++) {
		cout<<mang1[i]<<setw(5)<<endl;
	}*/
	
	return 0;
}
