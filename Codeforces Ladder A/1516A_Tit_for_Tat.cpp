//1516A - Tit for Tat
//https://codeforces.com/problemset/problem/1516/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
      
   ll t;
   cin>>t;
   while(t--){
      ll n,k;
      cin>>n>>k;
      ll a[n];
      for(ll i=0;i<n;i++) cin>>a[i];
      ll i = 0;
      ll j = n-1;
      while(i<j){
          if(a[i]==0){
              i++;
              continue;
          }
          a[i]--;
          a[j]++;
          k--;
          if(k==0) break;
      }
      for(ll i=0;i<n;i++) cout<<a[i]<<" ";
      cout<<endl;
   }
   return 0;
}
