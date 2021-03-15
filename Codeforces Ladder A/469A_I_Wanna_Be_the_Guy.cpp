//469A - I Wanna Be the Guy
//https://codeforces.com/problemset/problem/469/A

#include <bits/stdc++.h>
using namespace std;
int main() {
int n,x,y;
cin>>n;
cin>>x;
int arr[200];
int flag=0;
for(int i=0;i<x;i++){
  cin>>arr[i];
}
cin>>y;
for(int i=x;i<x+y;i++){
  cin>>arr[i];
}
sort(arr,arr +(x+y));
for(int i=0;i<x+y;i++){
  if(arr[i]!=arr[i+1]){
    flag++;
  }
}
if(flag==n){
  cout<<"I become the guy.";
}
else{
  cout<<"Oh, my keyboard!";
}
return 0;
}
