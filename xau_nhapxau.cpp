#include <iostream>
#include <cstring>

//#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main(int argc, char** argv) {
	char ten[10];
	char hoten[20];
	cout<<"Nhap ho va ten: ";
	cin>>ten;
	//cin.getline(ten,30);
	cout<<endl;
	cout<<"ten sau khi nhap: "<<ten<<endl;
	
//	cout<<"do dai xau: "<<strlen(ten)<<endl;
//	cout<<"Kich thuoc xau: "<<sizeof(ten)<<endl;
	
//	//chuyen sang chu thuong;
//	cout<<"chuyen sang chu thuong: "<<strlwr(ten)<<endl;
//	//chuyen sang chu HOA;
//	cout<<"chuyen sang chu HOA: "<<strupr(ten)<<endl;
	
	//cout<<"gia tri ten hien tai: "<<ten<<endl;
	//strcpy(ten2,ten);
	//cout<<"Ten sau khi copy: "<<ten2<<endl;
	
	cin>>hoten;
	
	cout<<"Noi ten: "<<strcat(hoten,ten)<<endl;
	
	return 0;
}
