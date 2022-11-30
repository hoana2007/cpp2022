#include <iostream>
#define max 100

using namespace std;
int main()
{
    int a[max] = {};
    int b[max] = {};
    int n;
    cout << "Nhap N: = "; cin >> n;
    cout << "Nhap cac phan tu cho mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Mang sau khi nhap: ";
    for (int i = 0; i < n; i++)
    {
        cout<< a[i] <<" ";
    }
    cout << endl;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] + a[i+1]) % 10 == 0)
        {
            b[d] = a[i] + a[i + 1];
            d++;
        }
    }

    cout << "So cap la: "<<d;
    cout << "So cap la: "<<d;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}
