#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	cout << "Nhap 1 so: ";
	int a;
	cin>>a;
	
	switch(a){
		case 1:{
			cout<<"heng lenh 1";
			cout<<"heng lenh 2";
			break;
		}
		case 2: cout<<"heng lenh 3";	
				break;
		default: cout<<"heng mac dinh"		;
	}
	
	return 0;
	
}
