//1300B - Assigning to Classes
//https://codeforces.com/problemset/problem/1300/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      ll a[2*n];
      for(ll i=0;i<2*n;i++){
        cin>>a[i];
      }
      sort(a,a+(2*n));
      ll min= abs(a[n]-a[n-1]);
      cout<<min<<endl;
    } 
	return 0;
}
