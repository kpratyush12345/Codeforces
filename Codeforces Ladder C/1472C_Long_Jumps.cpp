//1472C - Long Jumps
//https://codeforces.com/problemset/problem/1472/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 int main(){
    ll t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	ll a[n];
    	ll temp[n];
    	for(ll i=0;i<n;i++){
    	    cin>>a[i];
    	    temp[i]=a[i];
    	}
    	for(ll i=0;i<n;i++){
    		if((i+a[i])<n){
    		    temp[i+a[i]]=max(temp[i+a[i]],temp[i]+a[i+a[i]]);
    		}
    	}
    	sort(temp,temp+n);
    	cout<<temp[n-1]<<endl;
    }
    return 0;
 }
