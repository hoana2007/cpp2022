#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll xMuN(int x, int n){
	if (n == 0)
		return 1;
	else
		return x*xMuN(x, n-1);
}

int main(){
	ll x=10,n=18;
	cout<<xMuN(x,n) - xMuN(n,x);	
	return 0;
}