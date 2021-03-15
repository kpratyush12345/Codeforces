//1249B1 - Books Exchange (easy version)
//https://codeforces.com/problemset/problem/1249/B1

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
   ll t;
   cin>>t;
   while(t--){
   	ll n;
   	cin>>n;
   	ll a[n];
   	for(ll i=1;i<=n;i++){
   	    cin>>a[i];
   	}
   	for(ll i=1;i<=n;i++){
   	    ll count=1;
   	    ll ind = a[i]; 
   		while(ind!=i){
   			ind=a[ind];
   			count++;
   		}
   		cout<<count<<" ";
   	}
   	cout<<endl;
   }
	return 0;
}
