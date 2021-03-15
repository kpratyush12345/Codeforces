//1370B - GCD Compression
//https://codeforces.com/problemset/problem/1370/B


#include<bits/stdc++.h>
using namespace std;

#define tst               long t;cin>>t;while(t--)          
#define ll                long long

int main(){
    tst{
    	ll n;
    	cin>>n;
    	ll a[2*n];
    	for(ll i=0;i<2*n;i++) cin>>a[i];
    	vector<ll>even,odd;
    	for(ll i=0;i<2*n;i++){
    		if(a[i]%2==0)
    		even.push_back(i+1);
    		else
    		odd.push_back(i+1);
    		}
    		vector<pair <ll,ll>> p;
    		
    		for(ll i=0;i+1<even.size();i+=2){
    		   p.push_back({even[i],even[i+1]});
    		}
    		for(ll i=0;i+1<odd.size();i+=2){
    			p.push_back({odd[i],odd[i+1]});
    		}
    		
    		for(int i=0;i<n-1;i++){
    		    cout<<p[i].first<<" "<<p[i].second<<endl;
    		}
    		}
    	 		
           return 0;
}
