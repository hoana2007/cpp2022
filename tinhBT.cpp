#include <bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c,t;
	cout<<"Nhap so chia a = ";
	cin>>a;
	cout<<"Nhap thuong b = ";
	cin>>b;
	cout<<"Nhap so du c = ";
	cin>>c;
	//t = a*a - b*b + c*c*c;
	//cout<<"Bieu thuc duoc tinh la: "<<t;
	t = pow(a,2) - pow(b,2) + pow(c,3);
	cout<<"Bieu thuc duoc tinh la: "<<t;
	
	return 0;
}