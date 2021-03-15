//1392C - Omkar and Waterslide
//https://codeforces.com/problemset/problem/1392/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
   ll t;
   cin>>t;
   while(t--){
       ll n;
       cin>>n;
       ll a[n];
       for(ll i=0;i<n;i++){
           cin>>a[i];
       }
       ll ans=0;
       for(ll i=0;i<n-1;i++){
           if(a[i]>a[i+1]){
               ans+=a[i]-a[i+1];
           }
       }
       cout<<ans<<endl;
   }
   return 0;
}
