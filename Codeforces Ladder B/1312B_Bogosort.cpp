//1312B - Bogosort
//https://codeforces.com/problemset/problem/1312/B

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
      for(ll i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n,greater<int>());
      for(ll i=0;i<n;i++){
          cout<<a[i]<<" ";
      }
      cout<<endl;
    } 
	return 0;
}
