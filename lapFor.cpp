#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int S=0;
	int N = 0;
	
	cout << "Hay nhap N = ";
	cin >> N;
	if (N >= 100)
		for (int i=1; i <= N; i++){
			S = S+i;		
		}
		else cout<<"Hay nhap N lon hon 100"<<endl;
	cout<<"Ket qua tinh duoc la: "<<S<<endl;
	return 0;
}
