//1511A - Review Site
//https://codeforces.com/problemset/problem/1511/A

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
       for(ll i=0;i<n;i++){
           cin>>a[i];
       }
       ll one=0,three=0;
       for(ll i=0;i<n;i++){
           if(a[i]==1) one++;
           if(a[i]==3) three++;
       }
       cout<<one+three<<endl;
   }
   return 0;
}
