//1421A - XORwice
//https://codeforces.com/problemset/problem/1421/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   ll t;
   cin>>t;
   while(t--){
      ll a,b;
      cin>>a>>b;
      cout<<(a^b);
      cout<<endl;
   }
   return 0;
}
