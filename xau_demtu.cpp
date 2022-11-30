//Dem 1 tu xuat hien bao nhieu lan trong xau

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

int dem(char *a, char *b)
{
	int d=0;
	while(strstr(a,b)!= NULL)
	{
		d++;
		a = strstr(a,b)+1;
	}	
	return d;
}
int main(int argc, char** argv) {
	char s1[10],s2[10];
	cout<<"Nhap xau 1: "<<endl;
	cin>>s1;
	cout<<"Nhap xau 2 can tim: "<<endl;
	cin>>s2;
	cout<<s1<<setw(10)<<s2<<endl;
	cout<<"Dem duoc la: "<<dem(s1,s2);
	return 0;
}
