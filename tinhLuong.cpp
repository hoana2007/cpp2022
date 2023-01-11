//Tinh hoa hong ban hang
#include <iostream>
using namespace std;
int main(){
	float luong, thue, luongThucNhan;
	cout<<"Nhap luong:";
	cin>>luong;
	if (luong <= 7){
		thue = (luong*10)/100;
		luongThucNhan = luong - thue;
	}
	else if ((luong > 7)&&(luong <= 15)){
		thue = (luong*20)/100;
		luongThucNhan = luong - thue;
	}
	else if (luong > 15){
		thue = (luong*30)/100;
		luongThucNhan = luong - thue;
	}
	cout<<"Luong thuc nhan = "<<luongThucNhan<<" trieu dong";
	return 0;
}