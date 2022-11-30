#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 100
using namespace std;

int main(int argc, char** argv) {
	
	srand(time(0));
	int a[N]={};
	for (int i=0; i<N; i++){
		a[i] = rand();
		cout<<"Gia tri cua a: lan thu "<<i<<" = "<<a[i]<<endl;	
	}
	return 0;
}
