#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime> // for time()
using namespace std;

// ??nh ngh?a s? ph?n t? m?ng
#define MAX 1000

// khai b�o prototype
void nhapMang(int arr[], int &n);
void xuatMang(int arr[], int n);

int main()
{
	int myArray[MAX]; // m?ng myArray c� MAX ph?n t?
	int nSize; // nSize l� s? ph?n t? ???c s? d?ng, do user nh?p

	// nh?p xu?t m?ng t? ??ng
	nhapMang(myArray, nSize);
	xuatMang(myArray, nSize);

	return 0;
}

// h�m nh?p m?ng
void nhapMang(int arr[], int &n)
{
	// kh?i t?o s? ng?u nhi�n
	srand(time(NULL));

	cout << "Nhap so luong phan tu n : ";
	cin >> n;

	// kh?i t?o ng?u nhi�n t?ng ph?n t? t? ch? s? 0 ??n n - 1
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

// h�m xu?t m?ng
void xuatMang(int arr[], int n)
{
	// xu?t t?ng ph?n t? cho m?ng t? ch? s? 0 ??n n - 1
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

