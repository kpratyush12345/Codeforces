//1511C - Yet Another Card Deck
//https://codeforces.com/problemset/problem/1511/C

#include<bits/stdc++.h>
#include<list>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   ll n,q;
   cin>>n>>q;
   ll x,y;
   list<ll> ln,lq;
   for(ll i=0;i<n;i++){
       cin>>x;
       ln.push_back(x);
   }
   for(ll i=0;i<q;i++){
       cin>>y;
       lq.push_back(y);
   }
   list<ll> lv;
   for(auto i = lq.begin(); i !=lq.end(); ++i){
       ll k=0;
       for(auto j = ln.begin(); j !=ln.end(); ++j,++k){
           if(*i==*j){
               lv.push_back(k+1);
               x = *j;
               ln.erase(j);
               ln.push_front(x);
               j=ln.begin();k=0;
               break;
           }
       }
   }
   for(auto i = lv.begin(); i !=lv.end(); ++i) cout<<*i<<" ";
   cout<<endl;
   return 0;
}
