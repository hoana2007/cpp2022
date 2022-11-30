#include <iostream>
#include <iomanip>
#define N 5
using namespace std;

int main(int argc, char** argv) {
	
	int a[N] = {};
	int T=0;
	
	cout<<"Nhap gia tri cho day, dong thoi tinh tong"<<endl;
	for (int i=0; i<N; i++){
		cout<<"Nhap gia tri phan tu thu: "<<i<<" : ";
		cin>>a[i];
		T = T + a[i];
		cout<<"T trong lan tinh thu "<<i<<" = "<<T<<endl;
	}
	
	/*cout<<"tong gia tri cua a[Max] la:"<<endl;
	for(int i=0;i<N;i++){
		T=T+a[i];
	}*/
	
	cout<<"gia tri T tinh duoc la :"<<T<<endl;
		
	return 0;
}
