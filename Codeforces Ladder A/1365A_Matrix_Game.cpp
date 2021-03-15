//1365A - Matrix Game
//https://codeforces.com/problemset/problem/1365/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        set<ll> row,col;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        ll bc =min(n-row.size(),m-col.size());
        if(bc%2==0){cout<<"Vivek"<<endl;}
        else{cout<<"Ashish"<<endl;}
    }
    return 0;
}
