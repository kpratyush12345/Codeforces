//996A - Hit the Lottery
//https://codeforces.com/problemset/submission/996/113827004

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll subsetsum(vector<ll>& a,ll sum,ll n){
    ll dp[n+1][sum+1];
    for(ll i=0;i<n+1;i++){
	    for(ll j=0;j<sum+1;j++){
	        if(j==0){
	            dp[i][j]=0;
	        }
	        if(i==0){
	            dp[i][j]=LLONG_MAX-1;
	        }
	    }
	}
	
	for(ll i=1;i<2;i++){
	    for(ll j=0;j<sum+1;j++){
	        if(j%a[0]==0)
	        dp[i][j]=j/a[0];
	        else
	        dp[i][j]=LLONG_MAX-1;
	    }
	}
	
	for(ll i=2;i<n+1;i++){
	    for(ll j=1;j<sum+1;j++){
	        if(a[i-1]<=j){
	           dp[i][j]=min(dp[i][j-a[i-1]]+1 , dp[i-1][j]);
	        }
	        else{
	            dp[i][j]=dp[i-1][j];
	        }
	       }
	    }
	return dp[n][sum];
}
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
      
   ll sum;
   cin>>sum;
   ll count=0;
   if(sum>100){
   count = sum/100;
   sum = sum%100;
   }
   ll a[5] = {100,20,10,5,1};
   vector<ll> v;
   for(ll i=0;i<5;i++) v.push_back(a[i]);
   cout<< count + subsetsum(v,sum,5);
   return 0;
}
