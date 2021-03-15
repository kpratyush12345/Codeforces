//1296A - Array with Odd Sum
//https://codeforces.com/problemset/problem/1296/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);cout.tie(NULL);
       ll t;
       cin>>t;
       while(t--){
        ll n;
        cin >> n;
        ll a[n];
        ll odd=0,even=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1) 
               odd++;
            else 
               even++;
        }
        if(even==n || (odd==n && n%2==0)){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
