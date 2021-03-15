//1353C - Board Moves
//https://codeforces.com/problemset/problem/1353/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
      ll x;
      cin>>x;
      ll n=x/2;
      ll ans=8*(n*(n+1)*(2*n+1)/6);
      cout<<ans<<endl;
    } 
	return 0;
}
