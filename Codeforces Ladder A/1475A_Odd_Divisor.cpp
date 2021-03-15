//1475A - Odd Divisor
//https://codeforces.com/problemset/problem/1475/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool isPowerOfTwo(ll n){
return (ceil(log2(n)) == floor(log2(n)));
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        isPowerOfTwo(n)? cout<<"NO"<<endl : cout<<"YES"<<endl;
    }
	return 0;
}
