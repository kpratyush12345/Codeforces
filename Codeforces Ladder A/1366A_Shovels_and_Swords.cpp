//1366A - Shovels and Swords
//https://codeforces.com/problemset/problem/1366/A

#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
    	ll n,m;
    	cin>>n>>m;
    	ll res = min(n,m);
    	cout<<min(res,(n+m)/3)<<endl;
	}
return 0;
}
