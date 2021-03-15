//1493A - Anti-knapsack
//https://codeforces.com/problemset/problem/1493/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
    ll t;
       cin>>t;
       while(t--){
          ll n,k;
          cin>>n>>k;
          vector<ll> v;         
          for(ll i=k+1;i<=n;i++){
              v.push_back(i);
          }
          for(ll i=(k+1)/2;i<k;i++){
              v.push_back(i);
          }
          cout<<v.size()<<endl;
          for(ll i=0;i<v.size();i++){
              cout<<v[i]<<" ";
          }cout<<endl;
    }
    return 0;
}
