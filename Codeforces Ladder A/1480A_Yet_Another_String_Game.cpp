//1480A - Yet Another String Game
//https://codeforces.com/problemset/problem/1480/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   ll t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       for(ll i=0;i<s.length();i++){
           if(i%2==1){
               if(s[i]=='z'){
                   s[i]='y';
               }
               else {
                   s[i]='z';
               }
           }
           else{
               if(s[i]=='a'){
                   s[i]='b';
               }
               else {
                   s[i]='a';
               }
           }
       }
       cout<<s<<endl;
   }
return 0;   
}
