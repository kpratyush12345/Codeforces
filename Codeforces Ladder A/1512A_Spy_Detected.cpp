//1512A - Spy Detected!
//https://codeforces.com/problemset/problem/1512/A

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
      ll a[n];
      ll ind;
      for(ll i=0;i<n;i++) cin>>a[i];
      unordered_map<int,int> mpp;
      for(ll i=0;i<n;i++) mpp[a[i]]++;
      ll ele;
      for(auto i : mpp){
         if(i.second==1){
            ele = i.first;
            break;
         }
      }
      for(ll i=0;i<n;i++){
         if(a[i]==ele){
            cout<<i+1<<"\n";
            break;
         }
      }
   }
   return 0;
}
