//362B - Petya and Staircases
//https://codeforces.com/problemset/problem/362/B

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n,m;
  cin>>n>>m;
  int arr[m];
  int max=0;
  for(int i=0;i<m;i++){
    cin>>arr[i];
  }
  sort(arr,arr+m);
  int count=0;
   if(arr[0]==1 || arr[m-1]==n){
    cout<<"NO"<<endl;
  }
  else{
  for(int i=0;i<m-1;i++){
    if(arr[i+1]==arr[i]+1){
      count++;
    }
    if(count>max)
    max=count;
    if(arr[i+1]!=arr[i]+1)
    count=0;
   }
   if(max>=2){
    cout<<"NO"<<endl;
   }
   else if(max<2)
    cout<<"YES"<<endl;
  }
 return 0;
}
