//1478A - Nezzar and Colorful Balls
//https://codeforces.com/problemset/problem/1478/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
	ll n;
	cin>>n;
	ll arr[n];
	ll m=0;
	map<ll,ll> mp;
    for(ll i=0;i<n;i++){ 
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(auto i:mp){
	if(i.second>m){
	  m=i.second;
	}
}
cout<<m<<endl;
}
return 0;
}
