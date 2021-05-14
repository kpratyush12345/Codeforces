//1512B - Almost Rectangle
//https://codeforces.com/problemset/problem/1512/B

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
      char a[n][n];
      vector<pair<ll,ll>> v;
      for(ll i=0;i<n;i++){
          for(ll j=0;j<n;j++){
              cin>>a[i][j];
              if(a[i][j]=='*') v.push_back({i,j});
          }
      }
      if(v[0].second==v[1].second){
          if(v[0].second == 0){
              a[v[0].first][v[0].second+1] = '*';
              a[v[1].first][v[1].second+1] = '*';
          }
          else{
              a[v[0].first][0] = '*';
              a[v[1].first][0] = '*';
          }
      }
      else if(v[0].first==v[1].first){
          if(v[0].first == 0){
              a[v[0].first+1][v[0].second] = '*';
              a[v[1].first+1][v[1].second] = '*';
          }
          else{
              a[0][v[0].second] = '*';
              a[0][v[1].second] = '*';
          }
      }
      else{
          a[v[0].first][v[1].second] = '*';
          a[v[1].first][v[0].second] = '*';
      }
      for(ll i=0;i<n;i++){
          for(ll j=0;j<n;j++){
              cout<<a[i][j];
          }
          cout<<"\n";
      }
   }
   return 0;
}
