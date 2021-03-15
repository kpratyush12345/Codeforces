//1359B - New Theatre Square
//https://codeforces.com/problemset/problem/1359/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        char a[n][m];
        ll count=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]=='.'){
                    count++;
                }
            }
        }
        ll ans=0;
        if(2*x<y){
            ans=count*x;
        }
        else{
          for(ll i=0;i<n;i++){
              count=0;
          for(ll j=0;j<m;j++){
              if(a[i][j]=='.'){
                  count++;
              
              if(j==m-1){
                 ans+=(count/2)*y+(count%2)*x;
                  count=0; 
              }
              }
              else{
                  ans+=(count/2)*y+(count%2)*x;
                  count=0;
              }
          }
        }
        }
        cout<<ans<<endl;
	  } 
return 0;
}
