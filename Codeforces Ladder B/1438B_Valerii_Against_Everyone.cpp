//1438B - Valerii Against Everyone
//https://codeforces.com/problemset/problem/1438/B

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
    int n,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
  sort(a,a+n);
  for(int i=0;i<n-1;i++){
      if(a[i]==a[i+1])
      flag=1;
  }
  if (flag==1)
  cout<<"YES"<<"\n";
  else
  cout<<"NO"<<"\n";
      }

  return 0;
}
