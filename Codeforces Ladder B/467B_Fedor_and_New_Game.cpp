//467B - Fedor and New Game
//https://codeforces.com/problemset/problem/467/B

#include <bits/stdc++.h> 
using namespace std; 

int countSetBits(int count) { 
  if (count == 0) 
    return 0; 
  
  else
    return (count & 1) + countSetBits(count >> 1); 
} 

int main() {
  int n,m,k; 
  cin>>n>>m>>k;
  int arr[m];
  int cmpre,frnd=0;
  for(int i=0;i<m;i++){
    cin>>arr[i];
  }
  cin>>cmpre;
  int count;
  for(int i=0;i<m;i++){
    count=cmpre^arr[i];
    count= countSetBits(count);
    if(count<=k){
      frnd++;
    }  
  }
cout<<frnd<<endl;
return 0; 
} 
