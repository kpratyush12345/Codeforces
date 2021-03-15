//1473B - String LCM
//https://codeforces.com/problemset/problem/1473/B

#include<bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long
string repeat(string s, int n){ 
    string s1 = s; 
  for (int i=1; i<n;i++) 
        s += s1;
  return s; 
} 

int main(){
    ll t;
    cin>>t;
    while(t--){
    	string a,b;
      cin>>a>>b;
      ll m=std::lcm(a.length(),b.length());
      string aa = repeat(a,m/a.length());
      string bb = repeat(b,m/b.length());
      if(aa==bb){
          cout<<aa<<endl;
      }
      else{
          cout<<"-1"<<endl;
      }
    }
    return 0;
}
