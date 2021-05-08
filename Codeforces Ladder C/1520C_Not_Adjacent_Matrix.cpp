//1520C - Not Adjacent Matrix
//https://codeforces.com/problemset/problem/1520/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   ll t;
   cin>>t;
   while(t--){
        ll n;
	    cin>>n;
	    if(n==2){
	        cout<<-1<<endl;
	    }
        else{
	    ll xi=1,yi=2;
	    for(ll i=0;i<n;i++){
	        for(ll j=0;j<n;j++){
	            if(xi<=n*n){
	                cout<<xi<<" ";
	                xi+=2;
	            }
	            else{
	                cout<<yi<<" ";
	                yi+=2;
	            }
	        }
	        cout<<endl;
	    }
        }
   }
   return 0;
