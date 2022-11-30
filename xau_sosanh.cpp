#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char szString1[] = "howkteam.com!";
	char szString2[] = "howkteaM.com!";
	cout << "s1: " << szString1 << endl;
	cout << "s2: " << szString2 << endl;
	// so sánh 2 chuoi
	int result = strcmp(szString1, szString2);
	if (result < 0)
		cout << "s1 < s2" << endl;
	else if (result > 0)
		cout << "s1 > s2" << endl;
	else
		cout << "s1 == s2" << endl;
	return 0;
}

