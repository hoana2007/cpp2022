#include <iostream>
using namespace std;

int demSL (int n);
int demSL (int n)
{
	if(n == 0)
		return 0;
	return 1 + demSL(n/10);
}

int main() {
	int n;
	cout<<"Nhap so n: ";
	cin>>n;
	cout<<"So luong so trong "<<n<<" = "<<demSL(n);
	return 0;
}
