#include <iostream>
using namespace std;
int value = 6;
int main()
{
    int value = 9;
    value++;
    int a = ::value--;
    int c = a  + value;
    cout << "toan cuc: " << ::value<<"\n";
    cout << "cuc bo:" << value << "\n";
    std::cout << "c = "<<c<<"\n";
    return 0;
}
