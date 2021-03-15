//1465A - In-game Chat
//https://codeforces.com/problemset/problem/1465/A

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int count=0;
    for(int i=n-1;i>=0;i--){
      if(s[i]==')'){
        count++;
      }
      if(s[i]!=')'){
        break;
      }
    }
    if(count>n-count){
      cout<<"Yes"<<endl;
    }
    if(count<=n-count){
      cout<<"No"<<endl;
    }
  }
return 0;
}
