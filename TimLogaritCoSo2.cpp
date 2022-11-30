#include <iostream>
using namespace std;

int Logarit(int n);

int Logarit(int n)
{
       if(n<0)
              return -1;
    else
          if(n>=2)
                   return 1+ Logarit(n/2);
        else
        return 0;
}
int main() {
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Logarit co so 2 la: "<<Logarit(n);
	return 0;
}
