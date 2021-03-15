//1335B - Construct the String
//https://codeforces.com/problemset/problem/1335/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);

ll t;
cin>>t;
while(t--){
    ll n,a,b;
    cin>>n>>a>>b;
    string c="abcdefghijklmnopqrstuvwxyz";
    ll x=0;
    while(n--){
        cout<<c[x];
        x++;
        if(x==b) x=0;
    }
    cout<<endl;
}   
return 0;   
}
