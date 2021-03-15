//1355A - Sequence with Digits
//https://codeforces.com/problemset/problem/1355/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long int Digits(ll n){ 
    ll l = 0; 
    ll s = 9; 
    while (n){ 
        ll r = n % 10; 
        l = max(r, l); 
        s = min(r, s); 
        n = n / 10; 
    } 
    return l*s; 
} 

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll a1,k;
	    cin>>a1>>k;
	    for(ll i=0;i<k-1;i++){
	        a1+=Digits(a1);
	        if(Digits(a1)==0){
	            break;
	        }
	    }
	    cout<<a1<<endl;
	}
	return 0;
}
