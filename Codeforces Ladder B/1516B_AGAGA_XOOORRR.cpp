//1516B - AGAGA XOOORRR
//https://codeforces.com/problemset/problem/1516/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
      
   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      ll ff =0;
      ll a[n];
      for(ll i=0;i<n;i++) cin>>a[i];
      for(ll i=0;i<n-1;i++){
          ll x =0;
          for(ll j = 0;j<=i;j++){
              x^=a[j];
          }
          ll f = 0,t = 0;
          for(ll j=i+1;j<n;j++){
              t^=a[j];
              if(t==x){
                  f=1;t=0;
              }
          }
          if(t==0 && f){
              cout<<"YES\n";
              ff = 1;
              break;
          }
      }
      if(!ff) cout<<"NO\n";
   }
   return 0;
}
