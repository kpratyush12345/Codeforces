//1519B - The Cake Is a Lie
//https://codeforces.com/problemset/problem/1519/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   ll t;
   cin>>t;
   while(t--){
      ll n,m,k;
      cin>>n>>m>>k;
      if((n-1)+n*(m-1)==k) cout<<"YES\n";
      else cout<<"NO\n";
   }
   return 0;
}
