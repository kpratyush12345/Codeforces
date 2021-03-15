//1296B - Food Buying
//https://codeforces.com/problemset/problem/1296/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);cout.tie(NULL);
       ll t;
       cin>>t;
       while(t--){
        ll s;
        cin>>s;
        ll ans=0;
        while(1){
            ll n=(s/10)*10;
            ans+=n;
            ll left = s-n;
            s=(s/10)+left;
            if(s<10){
                ans+=s;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
