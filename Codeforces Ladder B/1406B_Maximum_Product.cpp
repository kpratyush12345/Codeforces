//1406B - Maximum Product
//https://codeforces.com/problemset/problem/1406/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
       sort(a,a+n);
       ll ans =-1e18;
        ans=max(ans ,  a[n-5]*a[n-4]*a[n-3]*a[n-2]*a[n-1] );
        ans=max(ans ,  a[0]*a[n-4]*a[n-3]*a[n-2]*a[n-1] );
        ans=max(ans ,  a[0]*a[1]*a[n-3]*a[n-2]*a[n-1] );
        ans=max(ans ,  a[0]*a[1]*a[2]*a[n-2]*a[n-1] );
        ans=max(ans ,  a[0]*a[1]*a[2]*a[3]*a[n-1] );
        ans=max(ans ,  a[0]*a[1]*a[2]*a[3]*a[4] );
    
    cout<<ans<<endl;
    
   }
return 0;
}
