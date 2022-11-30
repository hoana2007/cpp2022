#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if (n<2) return false;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0) return false;
	return true;
}

bool superkt(int n){
	while(n != 0){
		if(isPrime(n) == false){
			return false;
		}
		n = n/10;
	}
	return true;
}
int main(){
	int n = 0;
	cin >> n;
	bool t = superkt(n);
	cout<<t;
	if (t == 1)
		cout<<"Sieu nguyen to";
	else 
		cout<<"Khong la sieu nguyen to";
	
	return 0;
}
