//1491A - K-th Largest Value
//https://codeforces.com/problemset/problem/1491/A

 #include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);cout.tie(NULL);
          ll n,q;
          cin>>n>>q;
          ll a[n];
          ll one=0,zero=0;
          for(ll i=0;i<n;i++){
              cin>>a[i];
              if(a[i]==1){
                  one++;
              }else{
                  zero++;
              }
          }
          while(q--){
              ll x,y;
              cin>>x>>y;
              if(x==1){
                  a[y-1]=1-a[y-1];
                  if(a[y-1]==1){
                      one++;
                      zero--;
                  }else{
                      one--;
                      zero++;
                  }
              }
              if(x==2){
                if(y<=one){
                    cout<<1<<endl;
                }else{
                    cout<<0<<endl;
                }
              }
          }
          
    return 0;
}
