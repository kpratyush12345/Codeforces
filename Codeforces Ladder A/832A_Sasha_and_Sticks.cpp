//832A - Sasha and Sticks
//https://codeforces.com/problemset/problem/832/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
       ll n,k;
       cin>>n>>k;
       ll ans=n/k;
       if(ans%2==1){
           cout<<"YES"<<endl;
       } else {
           cout<<"NO"<<endl;
       }
return 0;   
}
