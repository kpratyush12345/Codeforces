//1520E - Arranging The Sheep
//https://codeforces.com/problemset/problem/1520/E

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
      
   ll t;
   cin>>t;
   while(t--){
		long long int ans=0,mid,n;
		string s;
		cin>>n;
		cin>>s;
		vector<int> v;

		for(int i=0;i<n;i++){
			if(s[i]=='*'){
				v.push_back(i);
			}
		}
		mid = v.size()/2;
		for(int i=0;i<v.size();i++){
			ans += abs(v[i]- v[mid]) - abs(i-mid);
		}
		cout<<ans<<endl;
   }
   return 0;
}
