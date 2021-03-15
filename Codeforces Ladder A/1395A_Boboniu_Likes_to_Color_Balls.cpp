//1395A - Boboniu Likes to Color Balls
//https://codeforces.com/problemset/problem/1395/A

#include <bits/stdc++.h>
using namespace std;
long long int r,g,b,w;

bool check(long long r,long long g,long long b,long long w){
    if (r%2 + g%2 + b%2 + w%2 > 1){
        return false;
    }
return true;    
}

int main() {
  int t;
  cin>>t;
  while(t--){
      cin>>r>>g>>b>>w;
     if(check(r,g,b,w)){
          cout<<"Yes"<<endl;
      }
     else if(r>0 && g>0 && b>0 && check(r-1,g-1,b-1,w+1)){
        cout<<"Yes"<<endl;
     }
     else{
         cout<<"No"<<endl;
     }
  }
  return 0;
}
