//1363A - Odd Selection
//https://codeforces.com/problemset/problem/1363/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll a[n];
        ll sum=0,odd=0,even=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1){
                odd++;
            }else{
                even++;
            }
        }
        ll mn=min(even,x-1);
        ll left=x-mn;
        if(left%2==0){
            left++;
        }
        if(odd>=left && left<=x)cout<<"Yes\n";
        else cout<<"No\n";
    }
	return 0;
}
