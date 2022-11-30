//Vi tri xuat hien bao nhieu lan trong xau

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

int vitri(char *a, char *b)
{
	int d = -1;
	if(strstr(a,b) != NULL)
		d = strlen(a) - strlen((strstr(a,b)));
	return d;	
}
int main()
{
	char s1[10],s2[10];
	cout<<"Nhap xau 1: "<<endl;
	cin>>s1;
	cout<<"Nhap xau 2 can tim: "<<endl;
	cin>>s2;
	cout<<s1<<setw(10)<<s2<<endl;
	cout<<"vi tri xua hien la: "<<vitri(s1,s2);
	return 0;
}
