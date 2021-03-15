//1362B - Johnny and His Hobbies
//https://codeforces.com/problemset/problem/1362/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
	ll n;
	cin>>n;
	vector<ll>a(n);
	for(ll i=0;i<n;i++){
	   cin>>a[i];
	}
	sort(a.begin(),a.end());
	ll flag=0;
	for(ll i=1;i<=1024;i++){
	    vector<ll> b;
	    for(ll j=0;j<n;j++){
	        b.push_back(a[j]^i);
	    }
	    sort(b.begin(),b.end());
	    if(a==b){
	        cout<<i<<endl;
	        flag=1;
	        break;
	    }
	}
	if(flag==0){
	    cout<<"-1"<<endl;
	}
    }
return 0;
}
