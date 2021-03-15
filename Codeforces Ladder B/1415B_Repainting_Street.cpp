//1415B - Repainting Street
//https://codeforces.com/problemset/problem/1415/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int mx= INT_MAX;
    for(int i=1;i<101;i++){
        int count=0;
        int j=0;
        while(j<n){
            while(arr[j]==i && j<n) j++;
            if(j>=n)break;
            j+=k;
            count++;
        }
        mx=min(mx,count);
    }
    cout<<mx<<endl;
  } 
 return 0; 
}
