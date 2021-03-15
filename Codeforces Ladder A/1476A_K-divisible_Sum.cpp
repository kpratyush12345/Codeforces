//1476A - K-divisible Sum
//https://codeforces.com/problemset/problem/1476/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    if(n==1){
	       cout<<k<<endl;
	       continue;
	    }
	    if(n==k){
	        cout<<"1"<<endl;
	    }
	    else if(n>k){
	        if(n%k==0){
	            cout<<"1"<<endl;
	        }
	        else{
	            cout<<"2"<<endl;
	        }
	    }
	    else{
	        if(k%n==0){
	            cout<<k/n<<endl;
	        }
	        else{
	            cout<<(k/n) + 1<<endl;
	        }
	    }
	}
	return 0;
}
