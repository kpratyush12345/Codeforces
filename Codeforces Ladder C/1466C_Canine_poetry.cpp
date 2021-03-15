//1466C - Canine poetry
//https://codeforces.com/problemset/problem/1466/C

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
       ll ans = 0;
	   for (ll i=1;i<s.length();i++){
		if (s[i]==s[i-1] || (i>=2 && s[i]==s[i-2])) {
			s[i]='.';
			ans++;
		}
	}
    cout<<ans<<endl;
   } 
    
return 0;   
}
