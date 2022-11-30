#include <iostream>
#include <cmath>
 
using namespace std;
  
int kiemtra(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int phannguyen = (int) sqrt(n);
    int i;
    for (i = 2; i <= phannguyen; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
/**
 * Ham main
 */
int main() {
	
	int n;
	cout<<"Nhap so tu nhien N: ";
	cin >> n;
	if (kiemtra (n) == 0)
		cout<<n<<" la khong nguyen to"<<endl;
		else cout<< n << " la nguyen  to" <<endl;

	int i;
    cout << "Cac so nguyen to nho hon 100 la: \n";
    for (i = 0; i < 100; i++) {
        if (kiemtra(i)) {
            cout << i << " ";
        }
    }

}
