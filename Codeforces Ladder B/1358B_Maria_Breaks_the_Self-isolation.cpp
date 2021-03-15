//1358B - Maria Breaks the Self-isolation
//https://codeforces.com/problemset/problem/1358/B

/*------------1st approach---------------*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      ll a[n];
      for(ll i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n);
      ll flag=0;
      for(int i=n-1;i>=0;i--){
        if(a[i]<=i+1){
            cout<<i+2<<endl;
            flag = 1;
            break;
        }
        else{
            continue;
        }
      }
        if(flag==0){cout<<"1"<<endl;}
    }
	return 0;
}



/*------------2nd approach---------------*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      ll a[n];
      for(ll i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n);
      ll count=n,flag=0;
        
        for(ll i=n-1;i>=0;i--){
          if(a[i]<=count){
          cout<<count+1<<endl;
          flag=1;
          break;
          }
          else{
          count--;
          }     
        }
        if(flag==0){cout<<"1"<<endl;}
        
      
    } 
	return 0;
}
