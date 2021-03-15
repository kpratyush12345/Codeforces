//1490D - Permutation Transformation
//https://codeforces.com/problemset/problem/1490/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void ans(ll l,ll r,ll d,ll a[],vector<ll> &res){
    if(l>r) return;

    ll ind=0;
    ll m=INT_MIN;
    for(ll i=l;i<=r;i++){
        if(a[i]>=m){
            ind=i;
            m=a[i];
        }
    }
    res[ind]=d;
    ans(l,ind-1,d+1,a,res);
    ans(ind+1,r,d+1,a,res);
}

void solve(){
          ll n;
          cin>>n;
          ll a[n];
          vector<ll> res(n);
          for(ll i=0;i<n;i++){
              cin>>a[i];
          }
          ans(0,n-1,0,a,res);
          for(ll i=0;i<n;i++){
              cout<<res[i]<<" ";
          }
          cout<<"\n";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
     
      ll t;
       cin>>t;
       while(t--){
          solve();
    }
    return 0;
}
