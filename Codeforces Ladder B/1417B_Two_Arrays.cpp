//1417B - Two Arrays
//https://codeforces.com/problemset/problem/1417/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n,k,flag=1,x,res;
    cin>>n>>k;
    
for(int i=0;i<n;i++){
      cin>>x;
      if(k%2==0 && x==k/2){
      res=flag;
      if(flag==0)
      flag=1;
      else
      flag=0;}
      else if(2*x< k)
          res=0;
      else 
      res=1;
      cout<<res<<" ";
      if(i==n-1)
      cout<<"\n";
}

}
  return 0;
}
