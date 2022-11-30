#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int N = 10;
	int S = 0;
	for (int i = 1; i <= N; i++)
		if(i % 2 == 1)
			S = S+i;
	cout <<"Tong tinh duoc la:    "<<S<<endl;	
	return 0;
}
