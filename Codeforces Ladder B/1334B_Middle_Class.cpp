//1334B - Middle Class
//https://codeforces.com/problemset/problem/1334/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
       ll n,x;
       cin>>n>>x;
       ll a[n];
       for (ll i = 0; i < n; i++)
       {
           cin>>a[i];
       }
       sort(a,a+n,greater<ll>());
       ll count=0;
       for(ll i=0;i<n;i++){
           if(a[i]>=x){
               a[i+1]+=(a[i]-x);
               count++;
           }
           else{
               break;
           }
       }
       cout<<count<<endl;
   } 
return 0;   
}
