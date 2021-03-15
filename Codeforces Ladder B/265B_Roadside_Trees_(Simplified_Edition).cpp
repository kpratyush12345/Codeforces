//265B - Roadside Trees (Simplified Edition)
//https://codeforces.com/problemset/problem/265/B

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  int count=a[1]+1;
  int diff=0;
  for(int i=1;i<=n-1;i++){
    if(a[i]<a[i+1]){
      count += 1;
      diff=a[i+1]-a[i];
      count += diff+1;
    }
    if(a[i]>a[i+1]){
      diff=a[i]-a[i+1];
      count += diff+2;
    }
    if(a[i]==a[i+1]){
      count += 2;
    }
  }
cout<<count<<endl;
return 0;
}
