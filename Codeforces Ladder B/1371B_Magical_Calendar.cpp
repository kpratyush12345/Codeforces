//1371B - Magical Calendar
//https://codeforces.com/problemset/problem/1371/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n>k){
            cout<<k*(k+1)/2<<endl;
        }
        else {
            k=n-1;
            cout<<(k*(k+1)/2)+1<<endl;
        }
    }
	return 0;
}
