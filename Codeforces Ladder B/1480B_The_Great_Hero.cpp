//1480B - The Great Hero
//https://codeforces.com/problemset/problem/1480/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   ll t;
   cin>>t;
   while(t--){
       ll A,B,n;
       cin>>A>>B>>n;
       ll aa[n],bb[n];
       ll m=-1,p;
       for(ll i=0;i<n;i++){
           cin>>aa[i];
           if(aa[i]>m){
               m=aa[i];
               p=i;
           }
       }
       for(ll i=0;i<n;i++){
           cin>>bb[i];
       }
       for(ll i=0;i<n;i++){
           if(p==i){
               continue;
           }
           if(B<=0){
               break;
           }
           B-=aa[i]*(ceil((double)bb[i]/A));
       }
       if(B<=0){
           cout<<"NO"<<endl;
           continue;
       }
       ll lastm = ceil((double)bb[p]/A);
       ll hero = ceil((double)B/aa[p]);
       if(lastm>hero){
           cout<<"NO"<<endl;
       }      
       else{
           cout<<"YES"<<endl;
       }
   } 
return 0;   
}
