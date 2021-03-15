//1335A - Candies and Two Sisters	
//https://codeforces.com/problemset/problem/1335/A

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
    cin>>n;
    if(n & 1){
        cout<<n/2<<endl;
    } else {
        cout<<(n/2)-1<<endl;
    }
} 
    
return 0;   
}
