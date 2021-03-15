//1401B - Ternary Sequence
//https://codeforces.com/problemset/problem/1401/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
   ll t;
   cin>>t;
   while(t--){
       ll x1,y1,z1,x2,y2,z2;
       cin>>x1>>y1>>z1>>x2>>y2>>z2;
       ll mn=min(z1,y2);
       ll sum=0;
       sum+=mn*2;
       z1=z1-mn;
       if(z2>x1){
           z2=z2-x1;
           z2=z2-z1;
           if(z2>0){
               ll mnn = min(y1,z2);
               sum+=(-2)*mnn;
           }
       }
       cout<<sum<<endl;
   }
return 0;
}
