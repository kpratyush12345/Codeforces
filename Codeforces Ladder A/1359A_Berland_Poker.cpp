//1359A - Berland Poker
//https://codeforces.com/problemset/problem/1359/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
      ll n,m,k;
      cin>>n>>m>>k;
      if(m==0){
        cout<<"0"<<endl;
        continue;
      }
      else if(m<=n/k){
        cout<<m<<endl;
        continue;
      }
      else{
        ll card=n/k;
        ll count=0;
        ll left=m-card;
        k--;
        count=ceil((double)left/k);
        cout<<card-count<<endl;
      }
    } 
	return 0;
}
