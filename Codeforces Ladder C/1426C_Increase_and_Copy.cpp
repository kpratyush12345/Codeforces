//1426C - Increase and Copy
//https://codeforces.com/problemset/problem/1426/C

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
int main()
{
    ll t;cin>>t;
    while(t--){
	ll n;cin>>n;
	
   ll ans=sqrt(n);
   if(ans*ans==n) cout<<(2*ans)-2<<endl;
   else if((ans+1)*ans>=n) cout<<(2*ans)-1<<endl;
   else cout<<2*ans<<endl;
 
    }
	return 0;
}
