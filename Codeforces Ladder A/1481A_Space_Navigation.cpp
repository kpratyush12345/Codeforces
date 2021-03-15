1481A - Space Navigation
https://codeforces.com/problemset/problem/1481/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   ll t;
   cin>>t;
   while(t--){
       ll px,py;
       cin>>px>>py;
       string s;
       cin>>s;
       ll r=0,u=0,d=0,l=0;
       for(ll i=0;i<s.length();i++){
           if(s[i]=='R')r++;
           if(s[i]=='U')u++;
           if(s[i]=='D')d++;
           if(s[i]=='L')l++;
       }
       if(px>=0 && py>=0){
           if(r>=px && u>=py){
               cout<<"YES"<<endl;
           } else {
               cout<<"NO"<<endl;
           }
       }
       else if(px<0 && py<0){
           if(l>=abs(px) && d>=abs(py)){
               cout<<"YES"<<endl;
           } else {
               cout<<"NO"<<endl;
           }
       }
       else if (px>=0 && py<0){
           if(r>=px && d>=abs(py)){
               cout<<"YES"<<endl;
           } else {
               cout<<"NO"<<endl;
           }
       }
       else {
           if(l>=abs(px) && u>=py){
               cout<<"YES"<<endl;
           } else {
               cout<<"NO"<<endl;
           }
       }     
   } 
return 0;   
}
