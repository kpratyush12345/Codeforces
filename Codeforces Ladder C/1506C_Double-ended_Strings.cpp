//1506C - Double-ended Strings
//https://codeforces.com/problemset/problem/1506/C

#include<bits/stdc++.h>
using namespace std;
#define tst               long t;cin>>t;while(t--)
#define rep(i,a,n)         for(int i=a;i<n;i++)
#define ull               unsigned long long int
#define ll                long long int
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
 tst{
     string a,b;cin>>a>>b;
int ma = 0;
		for(int i=0; i<b.length(); i++){
			for(int j=1; j<=b.length()-i; j++){
				int l = a.find(b.substr(i,j));
				if(l>=0){
					ma = max(ma,j);
				}
			}
		}
		cout<<a.length()+b.length()-2*ma<<endl;
 }
    return 0;
}
