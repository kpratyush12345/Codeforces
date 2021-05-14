//1506A - Strange Table
//https://codeforces.com/problemset/problem/1506/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,x;
		cin>>n>>m>>x;
		x--;
		cout<<((x%n)*m+(x/n)+1)<<endl;
	}
}
