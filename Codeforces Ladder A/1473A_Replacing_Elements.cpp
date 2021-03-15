//1473A - Replacing Elements
//https://codeforces.com/problemset/problem/1473/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
    	ll n,k;
    	cin>>n>>k;
    	ll arr[n];
    	for(ll i=0;i<n;i++){
    	    cin>>arr[i];
    	}
    	sort(arr,arr+n);
    	if(arr[n-1]<=k){
    	cout<<"YES"<<endl;
    	}
    	else{
    	if(arr[0]+arr[1]<=k){
    	    cout<<"YES"<<endl;
    	}
    	else{
    	    cout<<"NO"<<endl;
    	} 
    	}
    }
    return 0;
}
