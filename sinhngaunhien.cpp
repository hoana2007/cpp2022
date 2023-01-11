#include <bits/stdc++.h>
#define max 100
using namespace std;
int main()
{
    srand(time(0));
    int v1 = rand();		// v1 in the range 0 to 32767
    int v2 = rand() % 100;		// v2 in the range 0 to 99
    int v3 = rand() % 100 + 1;	// v3 in the range 1 to 100
    int v4 = rand() % 30 + 1985;	// v4 in the range 1985-2014
    cout<<v1<<endl;
    cout<<v2<<endl;
    cout<<v3<<endl;
    cout<<v4<<endl;
    return 0;
}