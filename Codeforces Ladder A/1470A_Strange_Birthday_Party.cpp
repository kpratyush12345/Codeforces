//1470A - Strange Birthday Party
//https://codeforces.com/problemset/problem/1470/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   ll t;
   cin>>t;
   while(t--){
       ll n,m;
       cin>>n>>m;
       ll k[n],c[m];
       for(ll i=1;i<=n;i++){
           cin>>k[i];
       }
       for(ll i=1;i<=m;i++){
           cin>>c[i];
       }
       ll cc[n];
       for(ll i=1;i<=n;i++){
           cc[i]=c[k[i]];
       }
       sort(cc+1,cc+n+1);
       ll cost=0;
       ll j=1;
       for(int i=n;i>=1;i--){
  	       if(c[j]<cc[i]){
  		      cost+=c[j];
  		      j++;
  	       }
  	       else{
  		      cost+=cc[i];
  	       }
       }
       cout<<cost<<endl;
   }
    
return 0;   
}
