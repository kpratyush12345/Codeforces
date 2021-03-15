//1327A - Sum of Odd Integers
//https://codeforces.com/problemset/problem/1327/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
       ll n,k;
       cin>>n>>k;
       if(k*k==n){
           cout<<"YES"<<endl;
       } else if(k*k>n){
           cout<<"NO"<<endl;
       } else{
           if(k&1){
               if(n&1) cout<<"YES"<<endl;
               else cout<<"NO"<<endl;
           } else {
               if(n&1) cout<<"NO"<<endl;
               else cout<<"YES"<<endl;
           }
       }
   } 
return 0;   
}
