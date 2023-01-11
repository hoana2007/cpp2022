//Tim max cua 3 so

#include <iostream>
using namespace std;
int main(){
	int a, b, c, max;
	cout<<"Nhap gia tri cho 3 so: ";
	cin>>a>>b>>c;
	
	if ((a > b) && (a > c)){
		max = a;
	}
	if ((b > a) && (b > c)){
		max = b;
	}
	if ((c > b) && (c > a)){
		max = c;
	}
	cout<<"So lon nhat la: "<<max;
	
	
return 0;
}