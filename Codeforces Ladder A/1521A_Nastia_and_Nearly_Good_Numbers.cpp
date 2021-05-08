//1521A - Nastia and Nearly Good Numbers
//https://codeforces.com/problemset/problem/1521/A

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
      if((a==1 && b==1)|| b==1 ){
          cout<<"NO\n";
          continue;
      }
      ll x,y,z;
      z = a*b;
      if(b==1 || b==2){
          z*=3;
      }
      y = z-a;
      cout<<"YES\n";
      cout<<a<<" "<<y<<" "<<z<<endl;
   }
   return 0;
}
