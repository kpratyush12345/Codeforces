//1395B - Boboniu Plays Chess
//https://codeforces.com/problemset/problem/1395/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
        ll n,m,x,y,a,b;
        cin>>n>>m>>a>>b;
        x=a;y=b;
        for(ll i=0;i<n;i++){
          for(ll j=0;j<m;j++){
             cout<<x<<" "<<y<<endl;
             y++;
             if(y>m){y=1;}
          }
          x++;
          y--;
          if(y==0){y=m;}
          if(x>n){x=1;}
        }
	return 0;
}
