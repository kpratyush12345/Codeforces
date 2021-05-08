//1519A - Red and Blue Beans
//https://codeforces.com/problemset/problem/1519/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   ll t;
   cin>>t;
   while(t--){
      ll a,b,d;
      cin>>a>>b>>d;
      if(d==0){
          if(a==b) cout<<"YES\n";
          else cout<<"NO\n";
      }
      else{
          if(a<b){
              if(a*(d+1)>=b) cout<<"YES\n";
              else cout<<"NO\n";
          }
          else if(b<a){
              if(b*(d+1)>=a) cout<<"YES\n";
              else cout<<"NO\n";
          }
          else cout<<"YES\n";
      }
   }
   return 0;
}
