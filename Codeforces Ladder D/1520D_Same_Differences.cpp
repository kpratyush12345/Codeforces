//1520D - Same Differences
//https://codeforces.com/problemset/problem/1520/D

    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main()
    {
    int t;
    cin>>t;
    while(t--)
    {
    ll n,ans=0;
    cin>>n;
    ll a[n];
    map<ll,ll> z;
    for(int i=0;i<n;i++)
    {
     
    cin>>a[i];
    a[i]=a[i]-i;
    z[a[i]]++;
    }
    for(auto x:z)
    {
    ll q=x.second;
    ans+=(q*(q-1))/2;
    }
    cout<<ans<<endl;
    }
    }
