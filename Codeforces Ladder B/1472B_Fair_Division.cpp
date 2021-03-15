//1472B - Fair Division
//https://codeforces.com/problemset/problem/1472/B


----------------------Without DP---------------------------------
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int o=0,t=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==1){
	            o++;
	        }
	        else{
	            t++;
	        }
	    }
	    if(o%2!=0){
	        cout<<"NO"<<endl;
	    }
	    else {
	        if(t%2!=0 && o==0){
	            cout<<"NO"<<endl;
	        }
	        else{
	            cout<<"YES"<<endl;
	        }
	    }
	}
	return 0;
}


--------------------------Using DP--------------------------------------
#include <bits/stdc++.h>
using namespace std;

bool equalsum(int a[],int sum,int n){
    bool dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
	    for(int j=0;j<sum+1;j++){
	        if(i==0){
	            dp[i][j]=false;
	        }
	        if(j==0){
	            dp[i][j]=true;
	        }
	    }
	}
	for(int i=1;i<n+1;i++){
	    for(int j=1;j<sum+1;j++){
	        if(a[i-1]<=j){
	           dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
	        }
	        else{
	            dp[i][j]=dp[i-1][j];
	        }
	       }
	    }
	return dp[n][sum];
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    sum+=a[i];
	}
	if(sum%2!=0){
	    cout<<"NO"<<endl;
	}
	else{
	if(equalsum(a,sum/2,n)==true){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	}
    }
return 0;
}
