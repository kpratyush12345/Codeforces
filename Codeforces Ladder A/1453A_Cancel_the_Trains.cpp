//1453A - Cancel the Trains
//https://codeforces.com/problemset/problem/1453/A

#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int n,m;
cin>>n>>m;
int a[m+n];
for(int i=0;i<n;i++){
  cin>>a[i];
}
for(int i=n;i<m+n;i++){
  cin>>a[i];
}
sort(a,a + (m+n));
int flag=0;
for(int i=0;i<m+n-1;i++){
  if(a[i]==a[i+1]){
    flag++;
  }
}
cout<<flag<<endl;
}
return 0;
}
