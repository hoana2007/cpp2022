#include <iostream>
#include <Windows.h>
using namespace std;

int main()	
{
	char ch;
	cout << "Enter your full name: ";
	cin >> ch;

	system("cls");

	do
	{
		cout << ch;
		ch = cin.get();
		Sleep(100);
	} while (ch != '\n' && ch != EOF);
	cout << endl;

	system("pause");
	return 0;
}
