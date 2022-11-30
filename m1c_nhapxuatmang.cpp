#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define Max 50
using namespace std;

int main() {
	
	float a[Max];
	
	srand(time(NULL));
	cout<<"Nhap ngau nhien gia tri cho phan tu cua mang"<<endl;
	for (int i = 0; i < Max; i++){
		a[i] = (rand() % 100)+1;
	}
	
	cout<<"Hien thi mang: "<<endl;
	cout<<setw(10);
	
	for (int i = 0; i < Max; i++){
		cout<<a[i]<<setw(10);
		if((i != 0)&&(i % 5 == 0))cout<<endl;
	}
	return 0;
}
