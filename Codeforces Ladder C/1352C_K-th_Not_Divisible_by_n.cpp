//1352C - K-th Not Divisible by n
//https://codeforces.com/problemset/problem/1352/C

#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        cout<<k+((k-1)/(n-1))<<endl;
}
return 0;
}
