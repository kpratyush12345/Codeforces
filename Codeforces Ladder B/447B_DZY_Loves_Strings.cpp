//447B - DZY Loves Strings
//https://codeforces.com/problemset/problem/447/B

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin>>s;
  int k;
  cin>>k;
  int arr[26];
  for(int i=0;i<26;i++){
    cin>>arr[i];
  }
  int max =*max_element(arr,arr+26);
  int res=0;
  for (int i=0;i<s.length();i++){
    res += (i+1)* arr[s[i]-'a'];
  }
  for(int i=1;i<=k;i++){
    res += (s.length()+i)*max;   
  }
  cout<<res;
  return 0;
}
