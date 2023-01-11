//Tinh hoa hong ban hang
#include <iostream>
using namespace std;
int main(){
	float doanhSo, hoaHong;
	cout<<"Nhap vao doanh so ban hang:";
	cin>>doanhSo;
	if (doanhSo <= 100){
		hoaHong = (doanhSo*5)/100;
	}
	else if ((doanhSo > 100)&&(doanhSo <= 300)){
		hoaHong = (doanhSo*10)/100;
	}
	else if (doanhSo > 300){
		hoaHong = (doanhSo*20)/100;
	}
	
	cout<<"Hoa hong thu duoc = "<<hoaHong<<" trieu dong";
	
	
	return 0;
}