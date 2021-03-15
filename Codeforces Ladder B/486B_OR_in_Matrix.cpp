//486B - OR in Matrix
//https://codeforces.com/problemset/problem/486/B

#include <bits/stdc++.h>
using namespace std;
int main() {
  int m,n;
  cin>>m>>n;
  int b[m][n];
  int a[m][n];
  int c[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>b[i][j];
      a[i][j]=1;
      c[i][j]=0;
    }
  }
  for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    if(b[i][j]==0){
      for(int k=0;k<m;k++){
        a[k][j]=0;
      }
      for(int k=0;k<n;k++){
        a[i][k]=0;
      }
    }
  }
  }
  for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    if(a[i][j]==1){
      for(int k=0;k<m;k++){
        c[k][j]=1;
      }
      for(int k=0;k<n;k++){
        c[i][k]=1;
      }
    }
  }
  }
  for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    if(c[i][j]!=b[i][j]){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  }
  cout<<"YES"<<endl;
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		cout<<a[i][j]<<" ";
    	}
    	cout<<endl;
    }
  return 0;
}
