//1514A - Perfectly Imperfect Array
//https://codeforces.com/problemset/problem/1514/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool cps(ll n){
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) return true;
    return false;
}
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
     
   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      ll a[n];
      for(ll i=0;i<n;i++) cin>>a[i];
      ll flag=0;
      for(ll i=0;i<n;i++){
          if(!cps(a[i])){
              flag=1;
              break;
          }
      }
      if(flag) cout<<"YES\n";
      else cout<<"NO\n";
   }
   return 0;
}
