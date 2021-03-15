//1364A - XXXXX
//https://codeforces.com/problemset/problem/1364/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll a[n];
        ll sum=0;
        ll count=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%x==0){
                count++;
            }
        }
        if(count==n){
            cout<<"-1"<<endl;
            continue;
        }
        else if(sum%x!=0){cout<<n<<endl;continue;}
        else{
            ll m=0;
            ll total=sum;
            for(ll i=0;i<n;i++){
                total-=a[i];
                if(total%x){
                    m=max(m,n-i-1);
                    break;
                }
            }
            total=sum;
            for(ll i=n-1;i>=0;i--){
                total-=a[i];
                if(total%x){
                    m=max(m,i);
                    break;
                }
            }
            cout<<m<<endl;
        }
    }
	return 0;
}
