//1405B - Array Cancellation
//https://codeforces.com/problemset/problem/1405/B

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long long int a[n];
    long long int mi;
    long long int total=0;
    for(long long int i=0;i<n;i++){
        cin>>a[i];
      if(a[i]>=0){
        total += a[i];
      }
      else{
        mi=min(total,-a[i]);
        a[i] += mi;
        total -= mi;
      }
    }
    cout<<total<<endl;
  }
  return 0;
}
