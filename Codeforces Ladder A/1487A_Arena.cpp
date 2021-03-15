//1487A - Arena
//https://codeforces.com/problemset/problem/1487/A

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
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll mn = *min_element(a,a+n);
        ll count=0;    
        for(ll i=0;i<n;i++){
	        if(a[i]==mn){
                count++;
            }
	    }
        cout<<n-count<<endl;   
    }
   
    return 0;
}
