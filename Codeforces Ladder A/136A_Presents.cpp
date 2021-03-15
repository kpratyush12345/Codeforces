//136A - Presents
//https://codeforces.com/problemset/problem/136/A

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int arr[n];
int j;
for(int i=1;i<=n;i++)
cin>>a[i];
for(int i=1;i<=n;i++){
    j=a[i];
    arr[j]=i;
}
for(int i=1;i<=n;i++){
  cout<<arr[i]<<" ";
}
return 0;
}
