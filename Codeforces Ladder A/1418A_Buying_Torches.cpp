1418A - Buying Torches
https://codeforces.com/problemset/problem/1418/A

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
  long long x,y,k,ans,a;
    cin>>x>>y>>k;
    a=k*y+k-1;
    ans=a/(x-1);
    if(ans*(x-1)!=a)ans++;
    ans+=k;
    cout<<ans<<"\n";
  }
  return 0;
}
