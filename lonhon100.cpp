#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int x;
cout << "Nhap mot so nguyen : " << endl;
cin>>x;
if(x>100)
{
	cout << x << " la lon hon 100." << endl;
}
else
{
	cout << x << " la nho hon 100." << endl;
}
return 0;
}
