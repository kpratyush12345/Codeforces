//1375A - Sign Flipping
//https://codeforces.com/problemset/problem/1375/A

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
      if(i%2 == 0){
        a[i]=abs(a[i]);
      }
      else{
        a[i]=abs(a[i])*-1;
      }
    }
    for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
    }
  cout<<endl;
  } 
 return 0; 
}
