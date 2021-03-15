//1490A - Dense Array
//https://codeforces.com/problemset/problem/1490/A

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
	    ll a[n];
	    for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll count= 0;
	    for(int i=0;i<n-1;i++){
	        ll mx = max(a[i],a[i+1]);
	        ll mn = min(a[i],a[i+1]);
	        if(mx/mn>2 ||(mx/mn==2 && mx%mn>0)){
	            while(mn*2<mx){
	                mn*=2;
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
   
    return 0;
}
