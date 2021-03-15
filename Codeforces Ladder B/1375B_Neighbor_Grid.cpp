//1375B - Neighbor Grid
//https://codeforces.com/problemset/problem/1375/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   ll t;
   cin>>t;
   while(t--){
       int n,m;
       cin>>n>>m;
       ll a[n][m];
       ll b[n][m];
       for(ll i=0;i<n;i++){
           for(ll j=0;j<m;j++){
               cin>>a[i][j];
               b[i][j]=4;
           }
       }
      for(ll j=0;j<m;j++){
          b[0][j]=3;
          b[n-1][j]=3;
      }
      for(ll i=0;i<n;i++){
          b[i][0]=3;
          b[i][m-1]=3;
      }
      b[0][0]=2;
      b[0][m-1]=2;
      b[n-1][0]=2;
      b[n-1][m-1]=2;
      ll flag=0;
      for(ll i=0;i<n;i++){
          for(ll j=0;j<m;j++){
              if(a[i][j]>b[i][j]){
                  flag=1;
              }
          }
      }
      if(flag==1){
          cout<<"NO"<<endl;
      }
      else{
          cout<<"YES"<<endl;
          for(ll i=0;i<n;i++){
           for(ll j=0;j<m;j++){
               cout<<b[i][j]<<" ";
           }
           cout<<endl;
       }
      }
   }
   return 0;
}
