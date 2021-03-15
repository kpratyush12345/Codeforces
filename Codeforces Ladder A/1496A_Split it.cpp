//1496A - Split it!
//https://codeforces.com/problemset/problem/1496/A

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
       string s,x,y,p;
       cin>>s;
       p=s;
       reverse(p.begin(),p.end());
       ll sz=s.size();
       if(sz<(2*k)+1) cout<<"NO\n";
       else{
            x =  s.substr(0, k); 
            y =  p.substr(0, k); 
            if(x==y) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
