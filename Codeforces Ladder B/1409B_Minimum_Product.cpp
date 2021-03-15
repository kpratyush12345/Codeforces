//1409B - Minimum Product
//https://codeforces.com/problemset/problem/1409/B

#include <bits/stdc++.h>
using namespace std;
#define ll  long long
 
ll ans(ll a,ll b,ll x,ll y,ll n){
    ll m=min(n,a-x);
    a=a-m;
    n=n-m;
    m=min(n,b-y);
    b=b-m;
    return (a*b);
}
 
int main() {
  int t;
  cin>>t;
 while(t--){
      ll a,b,x,y,n;
      cin>>a>>b>>x>>y>>n;
   ll min_1 = ans(a,b,x,y,n);
   ll min_2 = ans(b,a,y,x,n);
   cout<<min(min_1,min_2)<<endl;
  }
  return 0;
}
