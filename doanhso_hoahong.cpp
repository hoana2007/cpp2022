#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    long int doanhso;
    float hoahong;
    cout << "Nhap gia tri tong doanh so ban hang : " << endl;
    cin >> doanhso;
    if(doanhso <= 100)
    {
        hoahong = doanhso * 5 / 100;
        cout << "Voi tong doanh so la " << doanhso << ", ";
        cout << "Thi hoa hong nhan duoc la " << hoahong;
    }
    else if(doanhso <= 300)
    {
        hoahong = doanhso * 10 / 100;
        cout << "Voi tong doanh so la " << doanhso << ", ";
        cout << "Thi hoa hong nhan duoc la " << hoahong;
    }
    else if(doanhso > 300)
    {
        hoahong = doanhso * 20 / 100;
        cout << "Voi tong doanh so la " << doanhso << ", ";
        cout << "Thi hoa hong nhan duoc la " << hoahong;
    }
    return 0;
}
