//1409C - Yet Another Array Restoration	
//https://codeforces.com/problemset/problem/1409/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ll t;
  cin>>t;
  while(t--){
    ll n,x,y;
    cin>>n>>x>>y;
    ll d=0;
    for(ll i=1;i<n;i++){
        if((y-x)%(n-i)==0){
            d=(y-x)/(n-i);
            break;
        }
    }
    ll arr[n];
    arr[0]=y;
    ll ind=0;
    for(ll i=1;i<n;i++){
        arr[i]=arr[i-1]-d;
        if(arr[i]<=0){
            ind = i;
            break;
        }
    }
    if(ind!=0){
    arr[ind]=y+d;
    for(ll i=ind+1;i<n;i++){
        arr[i]=arr[i-1]+d;
    }
    }
    for(ll i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  } 
 return 0; 
}
