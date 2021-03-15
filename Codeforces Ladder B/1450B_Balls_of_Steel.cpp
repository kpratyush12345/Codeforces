//1450B - Balls of Steel
//https://codeforces.com/problemset/problem/1450/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        pair<ll,ll> v[n];
        for(ll i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        ll flag=-1;
        for(ll i=0;i<n;i++){
			ll mx=0;
			for(ll j=0;j<n;j++){
				mx=max(mx,abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second));
			}
			if(mx<=k){flag=1;}
		}
		cout<<flag<<endl;
	  } 
return 0;
}
