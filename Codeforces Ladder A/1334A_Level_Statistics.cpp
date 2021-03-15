//1334A - Level Statistics
//https://codeforces.com/problemset/problem/1334/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
ll t;
cin>>t;
while(t--){
   ll n;
   cin>>n;
   pair<int,int>p[n];
  for(ll i=0;i<n;i++){ 
      cin>>p[i].first>>p[i].second;
  }
  ll flag=0;
   for(ll i=0;i<n;i++){ 
       if(p[i].first<p[i].second){
           flag=1;
       }
   }
  for(ll i=0;i<n-1;i++){
      if(p[i+1].first<p[i].first){
          flag=1;
      }
      else if(p[i+1].second>p[i].second && p[i+1].first<=p[i].first){
          flag=1;
      }
      else if(p[i+1].second<p[i].second){
          flag=1;
      }
      else if(p[i+1].first-p[i].first<p[i+1].second-p[i].second){
        flag=1;  
      } 
  }
  if(flag==1) cout<<"NO\n";
  else cout<<"YES\n";
}
return 0;   
}
