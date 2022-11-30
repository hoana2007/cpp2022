#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char** argv) {
	char s[20];
	cin.getline(s,20);
	char t = s[2];
	cout<<strupr(t);
	
	for (int i=0; i<strlen(s); i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	cout<<s;
	return 0;
}
