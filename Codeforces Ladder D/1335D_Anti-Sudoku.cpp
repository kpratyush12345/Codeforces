//1335D - Anti-Sudoku
//https://codeforces.com/problemset/problem/1335/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   ll t;
   cin>>t;
   while(t--){
       char a[9][9];
       for(ll i=0;i<9;i++){
           for(ll j=0;j<9;j++){
               cin>>a[i][j];
               if(a[i][j]=='1'){
                   a[i][j]='2';
               }
           }
       }
       for(ll i=0;i<9;i++){
           for(ll j=0;j<9;j++){
               cout<<a[i][j];
           }
           cout<<endl;
       }
       cout<<endl;
   }
    
return 0;   
}
