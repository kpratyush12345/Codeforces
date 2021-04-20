//1514C - Product 1 Modulo N
//https://codeforces.com/problemset/problem/1514/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
      
   ll n;
   cin>>n;
   vector<ll> ans;
   ll p=1;
   for(ll i=1;i<=n-1;i++){
       if(__gcd(i,n)==1){
           ans.push_back(i);
           p=(p*i)%n;
       }
   }
   vector<ll> final;
   if(p!=1){
       for(ll i=0;i<ans.size();i++){
           if(ans[i]!=p) final.push_back(ans[i]);
       }
       ans=final;
   }
   cout<<ans.size()<<endl;
   for(ll i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
   }cout<<endl;
   return 0;
}
