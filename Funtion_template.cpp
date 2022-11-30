#include <iostream> 
#include <string> 
using namespace std; 
template <typename QTM> 
inline QTM const& Max (QTM const& a, QTM const& b) 
{ 
    return a < b ? b:a; 
} 
int main () 
{
    int i = 15; 
    int j = 26; 
    cout << "Gia tri lon nhat cua (i, j) la: " << Max(i, j) << endl; 
    double f1 = 4.5; 
    double f2 = 14.2; 
    cout << "Gia tri lon nhat cua (f1, f2) la: " << Max(f1, f2) << endl; 
    string s1 = "HocLapTrinhCplusplus"; 
    string s2 = "TaiQTM"; 
    cout << "Gia tri lon nhat cua (s1, s2) la: " << Max(s1, s2) << endl; 
    return 0; 
}
