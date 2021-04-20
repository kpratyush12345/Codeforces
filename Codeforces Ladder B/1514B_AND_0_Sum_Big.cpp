//1514B - AND 0, Sum Big
//https://codeforces.com/problemset/problem/1514/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    ll n,k;
    cin>>n>>k;
    ll ans=1;
    for(ll i=0;i<k;i++) ans=(ans*n)%MOD;
    cout<<ans<<endl;
    }
    return 0;
}
