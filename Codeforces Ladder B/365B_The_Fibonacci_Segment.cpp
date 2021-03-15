//365B - The Fibonacci Segment
//https://codeforces.com/problemset/problem/365/B

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  int a[n];
  int max=0;
  int count=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  if(n==1)
  cout<<"1";
  else{
  for(int i=2;i<n;i++){
      if(a[i]==a[i-1]+a[i-2]){
          count++;
         if(count>max)
           max=count;
      }
      else
      count=0;
  }
  cout<<max+2;
  }
  return 0;
}
