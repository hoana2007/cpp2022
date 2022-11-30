#include <bits/stdc++.h>
using namespace std;

#define ll long long
//So dep

ll tongCSo(ll n){
	ll tong = 0;
	while( n != 0){
		tong += n % 10;
		n = n/10;
	}
	return tong;
}

int main(){
	ll n;
	//cin>>n;
	
	ios::sync_with_stdio(0);
	
	for (int i = 1; i <= 100; i++){
		if (tongCSo(i) % 9 == 0)
			cout<<i<<" la so dep= "<<tongCSo(i)<<endl;
		else
			cout<<i <<" la so khong dep"<<endl;
	}
	return 0;
}
                         