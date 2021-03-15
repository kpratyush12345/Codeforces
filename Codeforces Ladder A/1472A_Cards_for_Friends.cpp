//1472A - Cards for Friends
//https://codeforces.com/problemset/problem/1472/A

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long width,height,n;
	    cin>>width>>height>>n;
	    if(n==1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        long long int count=1;
	        while(count<n && (height%2==0 || width%2==0)){
	            if(width%2==0){
	                count=count*2;
	                width=width/2;
	            }
	            else if(height%2==0){
	                count=count*2;
	                height=height/2;
	            }
	        }
	        if(count>=n){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    
	}
	return 0;
}
