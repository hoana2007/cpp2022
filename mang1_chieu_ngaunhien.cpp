#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime>	// for tine()
using namespace std;

// dinh nghia so luong phan tu cho mang
#define MAX 5

int main()
{
	int arr[MAX];

	// khoi tao so ngau nhien
	srand(time(NULL));

	// sinh gia tri ngau nhien cho mang
	for (int i = 0; i < MAX; i++)
	{
		arr[i] = rand();
	}

	// hien thi mang len man hinh
	for (int i = 0; i < MAX; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

	return 0;
}
