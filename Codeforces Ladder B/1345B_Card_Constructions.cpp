//1345B - Card Constructions
//https://codeforces.com/problemset/problem/1345/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll numCards(ll h) {
    return (3 * h * h + h) / 2;
}
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   ll t;
   cin>>t;
   while(t--){
       ll n;
       cin>>n;
       ll h = 0;
        while(numCards(h) <= n) h++;
        ll pyramids = 0;
        for(; h > 0; h--) {
            while(n >= numCards(h)) {
                n -= numCards(h);
                pyramids++;
            }
        }
        cout << pyramids << '\n';
   }
    
return 0;   
}
