#include <bits/stdc++.h>
#define nMax 100
using namespace std;

void nhapMang(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		a[i] = rand()%90 - 30;
	}
}	
void xuatMang(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<a[i]<<setw(5);
	}
	cout<<endl;
}	

int demPhanTuKhacNhau(int a[], int n)
{
	int dem=0, temp=0;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<i; j++)
		{
			if (a[i] == a[j])
			{
				temp = 0;
				break;
			}
			else 
				temp = 1;
		}
		if (temp == 1)
			dem++;
	}
	return dem;
}


int main() 
{
	srand((unsigned int)time(NULL));
	int n=0; 
	int a[nMax];
	cout<<"Nhap n = "; cin >> n;
	nhapMang(a,n);
	xuatMang(a,n);
    cout<<"So luong phan tu khac nhau la: = "<<demPhanTuKhacNhau(a,n);
}
