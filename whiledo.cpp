#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i=1;
	int n=0;
	int s = 0;
	cout << "Hay nhap gia tri cua N: ";
	cin >> n;
	while (i <=n){
		s = s + i;		
		i++;
	}
	cout << "Tong tinh duoc la:   "<<s<< endl;
	return 0;
}
