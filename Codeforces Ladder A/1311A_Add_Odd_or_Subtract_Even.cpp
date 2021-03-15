//1311A - Add Odd or Subtract Even
//https://codeforces.com/problemset/problem/1311/A

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
       if(a==b){
           cout<<"0"<<endl;
       }
       else if(a<b){
           if((b-a)%2!=0){
               cout<<"1"<<endl;
           }
           else{
               cout<<"2"<<endl;
           }
       }
       else{
           if((a-b)%2==0){
               cout<<"1"<<endl;
           }
           else{
               cout<<"2"<<endl;
           }
       }
   } 
    
return 0;   
}
