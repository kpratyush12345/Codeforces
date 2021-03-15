//1355B - Young Explorers
//https://codeforces.com/problemset/problem/1355/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
	ll n;
	cin>>n;
	map<ll,ll> mp;
	for(ll i=0;i<n;i++){
	    ll k;
	    cin>>k;
	    mp[k]++;
	}
	ll total=0;
	ll left=0;
	for(auto i : mp){
	    i.second+=left;
	    total+=(i.second/i.first);
	    left=i.second%i.first;
	}
	cout<<total<<endl;
    }
return 0;
}
