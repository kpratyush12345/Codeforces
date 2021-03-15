//1462A - Favorite Sequence
//https://codeforces.com/problemset/problem/1462/A

#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int temp[n];
  int i=0;
  for(int j=0;j<n/2;j++){
    temp[i]=arr[j];
    temp[i+1]=arr[n-1-j];
    i=i+2;
  }
  if(n%2==0){
  for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";
  }
  cout<<endl;
  }
  else{
  temp[n-1]=arr[n/2];
  for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";
  }
  cout<<endl;
  }
}  
return 0;
}
