//1506B - Partial Replacement
//https://codeforces.com/problemset/problem/1506/B

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
ll n,k;cin>>n>>k;

string s;cin>>s;
ll cnt=count(s.begin(),s.end(),'*');
if(cnt<3){ cout<<cnt<<"\n";continue;}
ll ans=1;
 ll l=s.find('*');
  ll r = s.find_last_of('*');
 for(int i=l ; i<r ; i+=k){
            while(s[i]!='*')
            i--;ans++;
  }
		cout << ans << endl;
 }
    return 0;
}
