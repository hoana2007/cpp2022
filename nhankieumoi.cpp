#include <iostream>
#include <stdlib.h>
#include <string.h>
#define N 10

using namespace std;

int main(int argc, char** argv) {
	
	const char *AA = "845";
	const char *BB = "878";
	int a[N],b[N];

	int A = atoi(AA);
	int j = 0;
	for (int i=strlen(AA)-1; i>=0; i--)
	{
		a[j] = int(A)%10;
		cout<<"j = "<<i<<"A = "<<a[j]<<endl;
		j++;
		A = int(A/10);
	}
	
	for (int i=strlen(AA)-1; i>=0; i--)
	{
		cout<<a[i]<<"*";
	}
	
	return 0;
}
