//1430C - Numbers on Whiteboard
//https://codeforces.com/problemset/problem/1430/C

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
 int a=n,b=n-1;
  cout<<"2"<<"\n";
  for(int i=1;i<n;i++){
      cout<<a<<" "<<b<<"\n";
      a=(a+b+1)/2;b--;
  }
  }
  return 0;
}
