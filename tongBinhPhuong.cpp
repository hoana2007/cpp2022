#include <iostream>
using namespace std;
long tongBP(int n)
{
    if(n <=1)
        return 1;
    else    
        return n*n + tongBP(n-1);
}
int main()
{
    int n;
    cout<<"Nhap n = "; cin>>n;
    cout<<"Tong binh phuong tinh duoc la: S = "<<tongBP(n);
    return 0;
}
