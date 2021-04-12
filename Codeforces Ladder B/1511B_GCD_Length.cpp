//1511B - GCD Length
//https://codeforces.com/problemset/problem/1511/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll a,b,c;
	    cin>>a>>b>>c;
	    vector<pair<ll,ll>> vec {{2,3},{11,13},{101,103},{1009, 1013},{10007, 10009},{100003,100019},{1000003, 1000033},{10000019, 10000169},{812182027,815730977}};
	    ll aa = (ll)pow(10,c-1);
	    ll bb,cc;
	       bb = (vec[a-c].first)*aa; 
	       cc = (vec[b-c].second)*aa;
	   cout<<bb<<" "<<cc<<endl;
	}
	return 0;
}
