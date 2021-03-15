//1447B - Numbers Box
//https://codeforces.com/problemset/problem/1447/B

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    long long int count=0,sum=0;
    int minimum=101;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>a[i][j];
        if(a[i][j]<0)
          count++;
          minimum=min(minimum,abs(a[i][j]));
          sum+=abs(a[i][j]);
        
      }
    }
    if(count%2==0){
      cout<<sum<<endl;
    }
    else{
      cout<<sum-(2*minimum)<<endl;
    }
  }
  return 0;
}
