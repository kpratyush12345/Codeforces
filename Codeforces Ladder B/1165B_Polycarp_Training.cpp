//1165B - Polycarp Training
//https://codeforces.com/problemset/problem/1165/B

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
  int count=1,day=0;
  for(int i=0;i<n;i++){
    if(a[i]>=count){
      day++;
      count++;
    }
  }
  cout<<day<<endl;
  return 0;
}
