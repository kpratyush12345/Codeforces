//1490C - Sum of Cubes
//https://codeforces.com/problemset/problem/1490/C

 #include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);cout.tie(NULL);
       ll t;
       cin>>t;
       while(t--){
          ll x;
          cin>>x;
          int flag=0;
          for(ll i=1; i<=(ll)cbrtl(x/2); i++){
            if(!(cbrtl(x-i*i*i)-(ll)cbrtl(x-i*i*i))){
               flag=1;
               break;
            }
          }
          if(flag){
              cout<<"YES\n";
          } else {
              cout<<"NO\n";
          }
        }
    return 0;
}
