#include <bits/stdc++.h>
using namespace std;
int main()
{
	//Tong gia tri cac phan tu trong mang a co 10 phan tu
	int a[10] = {5,4,9,2,10,1,"10",15,40,9};
	int T = 0;
	//Cach 1:
	//T = a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8] + a[9];
	
	//Cach 2:
	for (int i = 0; i <= 10; i++)
	{
		T = T + a[i];
	}
	cout<<"Tong gia tri cac phan tu trong mang = "<<T;

	return 0;
}