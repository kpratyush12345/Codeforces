//1506D - Epic Transformation
//https://codeforces.com/problemset/problem/1506/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll mx=0;
		map<ll,ll>mp;
		for(int i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			mx=max(mx,++mp[x]);
		}
		cout<<max(n%2,2*mx-n)<<endl;
	}
}
