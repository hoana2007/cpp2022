#include <iostream>
#include <algorithm>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

const int SIZE = 15;

int main() {
	
	int intArr[SIZE] = {-5,6,4,9,2,-2,3,7,8,45,1,2,3,15};
	
	sort(intArr, intArr+SIZE);
	
	cout<<"Day da sap xep" << endl;
	
	for (size_t i=0; i !=SIZE; ++i)
		cout << intArr[i]<<" ";
	
	return 0;
}
