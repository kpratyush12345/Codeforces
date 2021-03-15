//1373A - Donut Shops
//https://codeforces.com/problemset/problem/1373/A

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
    long long int a,b,c;
    cin>>a>>b>>c;
    if(a>=c){
        cout<<"-1"<<" ";
    }
    else{
        cout<<"1"<<" ";
    }
    if(c>=a*b){
        cout<<"-1"<<" ";
    }
    else{
        cout<<b<<" ";
    }
    cout<<endl;
  }
  return 0;
}
