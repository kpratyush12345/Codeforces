//1407A - Ahahahahahahahaha
//https://codeforces.com/problemset/problem/1407/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    int one=0 ,zero=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]==1){
        one++;
      }
      else{
        zero++;
      }
    }
    if(one<=n/2){
      cout<<zero<<endl;
      for(int i=0;i<zero;i++){
        cout<<"0"<<" ";
      }
      cout<<endl;
    }
    else{
      if(one%2!=0){
        one--;
      }
      cout<<one<<endl;
      for(int i=0;i<one;i++){
        cout<<"1"<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
