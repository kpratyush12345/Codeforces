//1520A - Do Not Be Distracted!
//https://codeforces.com/problemset/problem/1520/A

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
      string s;
      cin>>s;
      string r;
      r.push_back(s[0]);
      for(ll i=1;i<s.length();i++){
          if(s[i]==s[i-1]) continue;
          else r.push_back(s[i]);
      }
      unordered_map<ll,ll> mp;
      for(ll i=0;i<r.size();i++) mp[r[i]]++;
      ll flag=0;
      for(auto i:mp){
      if(i.second > 1){flag=1;break;}
      }

      if(flag) cout<<"NO\n";
      else cout<<"YES\n";
   }
   return 0;
}
