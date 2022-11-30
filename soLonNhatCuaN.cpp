//Tim so lon nhat cua so N
#include <iostream>
using namespace std;
long chuSoLonNhat(long n, long &max);
long chuSoLonNhat(long n, long &max)
{
	long m;
	if(n == 0)
		return max;
	else
	{
		m = n%10;
		if (m>max)
			max = m;
	}
	return chuSoLonNhat(n/10,max);
}
int main() 
{
	long n,m;
	cout<<"Nhap n va m:";
	cin>>n>>m;
	cout<<"Chu so lon nhat trong N la: "<<chuSoLonNhat(n,m);
	return 0;
}
