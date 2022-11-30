#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char szString1[] = "Hello Howkteam.com!";
	char szString2[] = "kteam";
	cout << "s1: " << szString1 << endl;
	cout << "s2: " << szString2 << endl;

	if (strstr(szString1, szString2) != NULL)
		cout << "Tim thay " << szString2 << " trong " << szString1 << endl;
	else
		cout << "Khong tim thay!" << endl;
	return 0;
}

