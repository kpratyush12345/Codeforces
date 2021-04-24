//1517A - Sum of 2050
//https://codeforces.com/problemset/problem/1517/A

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
      if(n%2050!=0) cout<<"-1\n";
      else{
        ll a = n/2050;
        ll b = 0;
        while(a){
           ll c = a%10;
           a=a/10;
           b += c;
        }
        cout<<b<<"\n";
        }
   }
   return 0;
}
