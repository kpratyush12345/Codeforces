//1466B - Last minute enhancements
//https://codeforces.com/problemset/problem/1466/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int t;
  cin>>t;
  while(t--){
    long long int n;
    cin>>n;
    map <long long int , long long int> m;
    long long int a[n];
    for(long long int i=0;i<n;i++){
      cin>>a[i];
      if(m[a[i]]==0){
        m[a[i]]++;
      }
      else{
        m[a[i]+1]++;
      }
    }
    cout<<m.size()<<endl;
  }
  return 0;
}
