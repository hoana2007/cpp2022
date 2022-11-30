//Tim kiem tren trong chuoi ho ten.
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

void timten(char *a, char *b)
{
	int n = strlen(a);
	char *s;
	for (int i = n-1; i >=0; i--)
	{
		if(a[i] == ' ')
		{
			s = a+i+1;
			break;
		}
	}
	if(strcmpi(s,b) ==0)
		cout << s;
	else 
		cout <<"ban nhap sai ten \n";
}

int main()
{
	char s1[10],s2[10];
	cout<<"Nhap xau 1: "<<endl;
	cin>>s1;
	cout<<"Nhap xau 2 can tim: "<<endl;
	cin>>s2;
	cout<<s1<<setw(10)<<s2<<endl;
	timten(s1,s2);
	return 0;
}
