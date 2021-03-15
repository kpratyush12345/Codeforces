//1471A - Strange Partition
//https://codeforces.com/problemset/problem/1471/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
  cin>>t;
  while(t--){
    ll n,x;
    cin>>n>>x;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
    }
    ll min=ceil(((long double)sum)/x);
    ll ans=0;
    for(ll i=0;i<n;i++){
      ans+=ceil(( long double)a[i]/x);
    }
    ll max=ans;
    cout<<min<<" "<<max<<endl;
  }
	return 0;
}
