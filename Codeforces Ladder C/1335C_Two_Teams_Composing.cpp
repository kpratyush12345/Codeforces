//1335C - Two Teams Composing
//https://codeforces.com/problemset/problem/1335/C

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
       map<ll,ll> mp;
       set<ll> s;
       for(ll i=0;i<n;i++){
           cin>>a[i];
           s.insert(a[i]);
           mp[a[i]]++;
       }

    ll max_count = 0; 
    for (auto i : mp) { 
    if (max_count < i.second) {  
        max_count = i.second; 
    } 
    }
       ll si=s.size();
       ll mn= min(si,max_count);
       if(max_count==si){
           cout<<si-1<<endl;
       } else{
           cout<<mn<<endl;
       }
   }
    
return 0;   
}
