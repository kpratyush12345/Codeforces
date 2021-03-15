//1419D1 - Sage's Birthday (easy version)
//https://codeforces.com/problemset/problem/1419/D1

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n-2;i++){
    if(a[i+1]<a[i] && a[i+1]<a[i+2]){
      continue;
    }
    else{
      swap(a[i],a[i+1]);
    }
    i++;
  }
  int count=0;
  for(int i=0;i<n-2;i++){
      if(a[i+1]<a[i] && a[i+1]<a[i+2]){
      count++;
      i++;
    }
  }
  cout<<count<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
