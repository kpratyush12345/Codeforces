//337A - Puzzles
//https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>
using namespace std;
int main() {
int n,m;
cin>>n>>m;
int a[m];
int ans=0;
for(int i=0;i<m;i++){
cin>>a[i];
}
sort(a,a+m);
int res=a[m-1]-a[0];
for(int i=n;i<=m;i++){
     ans=a[i-1]-a[i-n];
     ans = abs(ans);
     res = min(res,ans); 
    }

cout<<res;
return 0;
}
