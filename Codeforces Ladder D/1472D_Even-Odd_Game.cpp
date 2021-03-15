//1472D - Even-Odd Game
//https://codeforces.com/problemset/problem/1472/D

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll>a(n);
	    ll al=0,bob=0;;
	    
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	        sort(a.begin(),a.end(), greater<int>());
	        
	        for(int i=0;i<n;i++){
	            if((i+1)%2==1){
	                if(a[i]%2==0)
	                    al+=a[i];
	            }
	            else if((i+1)%2==0){
	                if(a[i]%2==1)
	                    bob+=a[i];
	            }   
	        }
	        if(al>bob){
	            cout<<"Alice"<<endl;
	        }
	        else if(bob>al){
	            cout<<"Bob"<<endl;
	        }
	        else{
	            cout<<"Tie"<<endl;
	        }     
	}
	return 0;
}
