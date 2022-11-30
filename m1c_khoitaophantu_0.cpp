#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	int n=0;
	cout<<"Nhap vao so nguyen N: "<<setw(10);
	cin>>n;
	int a[n]={0};
	for (int i=0; i<n; i++){
		cout<<a[i]<<setw(10);
	}
	return 0;
}
