//466A - Cheap Travel
//https://codeforces.com/problemset/problem/466/A

#include <bits/stdc++.h>
using namespace std;
int main() {
int n,m,a,b;
cin>>n>>m>>a>>b;
if(m*a>b){
    int x=(n%m)*a;
    if(x>b)
    cout<<n/m*b +b;
    else
    cout<<n/m*b +x;
}
else
cout<<n*a;
return 0;
}
