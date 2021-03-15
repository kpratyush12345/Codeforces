//1455A - Strange Functions
//https://codeforces.com/problemset/problem/1455/A

#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  string s;
  int res=0;
  for(int i=0;i<n;i++){
    cin>>s;
    res=s.size();
    cout<<res<<'\n';
}
return 0;
}
