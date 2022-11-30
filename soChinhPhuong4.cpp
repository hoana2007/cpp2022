#include<bits/stdc++.h>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <io.h>
#define ll long long
#define for(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

bool cp(int n){
	int sqr = sqrt(n);
	return (sqr*sqr == n);
}
int bp(int n){
    return n*n;
}
long long Rand(ll l, ll h)
{
    return l + ((long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) +
                rand()) % (h - l + 1);
}

ll getIN(int h1, int h2){
	return Rand(h1,h2);
}
int main(){
	int N = 10000;
    int m = 0;
    int s[100]={};
    m = sqrt(N);

    bool flg = 1;
    int a,b,c,d;
    int j = 0;
    int T = 0;

    srand(time(NULL));
    while( flg != 0){
        for (j,0,3){
            s[j] = getIN(0,m);
            T = T + bp(s[j]);
        }
        if (T == N){
            cout<<N<<" = "<<s[0]<<"^2"<<" + "<<s[1]<<"^2"<<" + "<<s[2]<<"^2"<<" + "<<s[3]<<"^2"<<endl;
            flg = 0;
        }
        else{
            T = 0;
        }
    }


//        for(j,1,m){
//            for(k,0,j){
//                for(l,0,k){
//                    for(h,0,l){
//                       if(bp(j)+bp(k)+bp(l)+bp(h)==N){
//                           cout<<N<<"="<<j<<"^2"<<" + "<<k<<"^2"<<" + "<<l<<"^2"<<" + "<<h<<"^2"<<endl;
//                           flg = 1;
//                           a = j;
//                           b = k;
//                           c = l;
//                           d = h;
//                           break;
//                       }
//                    }
//                }
//            }
//        }
//        cout<<a<<"--"<<b<<" -- "<<c<<" -- "<<d;

     return 0;
}