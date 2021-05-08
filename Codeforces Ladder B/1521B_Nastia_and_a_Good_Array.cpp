//1521B - Nastia and a Good Array
//https://codeforces.com/problemset/problem/1521/B

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
    int n,i,prime=1e9+7;
    cin>>n;
    vector<int> A(n);
    for(i=0;i<n;i++){
      cin>>A[i];
    }
    cout<<n/2<<endl;
    for(i=0;i<n-1;i+=2){
      cout<<(i+1)<<" "<<(i+2)<<" "<<min(A[i],A[i+1])<<" "<<prime<<endl;
    }
  }
  return 0;
}
