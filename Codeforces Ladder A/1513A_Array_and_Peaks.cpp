//1513A - Array and Peaks
//https://codeforces.com/problemset/problem/1513/A

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
      int mxp=(n-1)/2;
     if(k>mxp) {
         cout<<"-1\n";
         continue;
     }
     

      int a[n];
        
        int lim=k*2+1;
          int l=1,h=n;
         for(int i=1;i<=n;i++,lim--){
         if(lim<=0) break;
         if(i%2==0) {
             cout<<h<<" ";
             h--;
         }
         else {
             cout<<l<<" ";
             l++;
         }
         }

         for(int i=l;i<=h;i++) {
             cout<<i<<" ";
             
         }
         cout<<"\n";
      
   }
   return 0;
}
