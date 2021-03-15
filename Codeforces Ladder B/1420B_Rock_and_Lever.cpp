//1420B - Rock and Lever
//https://codeforces.com/problemset/problem/1420/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll t;
   cin>>t;
   while(t--){
       ll n;
       cin>>n;
      ll a[n],total=0;
      vector<bool>vis(n,false);
        for(ll i=0;i<n;i++) cin>>a[i];
     for(ll i=31;i>=0;i--){
         ll c=0;
         for(ll j=0;j<n;j++){
              if((1<<i) & (a[j]) &&(!vis[j])){
                  vis[j]=true;
                  c++;
              }
          }
          total+=(c*(c-1))/2;
      }
      cout<<total<<endl;
   }
return 0;
}
