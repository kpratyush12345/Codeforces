//202A - LLPS
//https://codeforces.com/problemset/problem/202/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
      
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   string ss;
   ll ind=-1;
   for(ll i= s.length()-1;i>0;i--){
       if(s[i]!=s[i-1]){
           ind=i;break;
       }
   }
   if(ind!=-1){
   for(ll i=ind;i<s.length();i++) cout<<s[i];
   }
   else {
       cout<<s;
   }
   return 0;
}
