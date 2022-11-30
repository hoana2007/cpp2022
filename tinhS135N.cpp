#include <iostream>
using namespace std;
long tongS(unsigned n)
{
    if(n == 0)
        return 1;
    else    
        return (2*n+1) + tongS(n-1);
}
int main()
{
    int unsigned n;
    cout<<"Nhap n = "; cin>>n;
    cout<<"Tong tinh duoc la: S = "<<tongS(n);
    return 0;
}
