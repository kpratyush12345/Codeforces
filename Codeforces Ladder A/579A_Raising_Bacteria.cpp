//579A - Raising Bacteria
//https://codeforces.com/problemset/problem/579/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   ll n;
   cin>>n;
   ll count=0;
    while(n>0){
        count+=(n&1);
        n = n>>1;
    }
    cout<<count;
   return 0;
}
