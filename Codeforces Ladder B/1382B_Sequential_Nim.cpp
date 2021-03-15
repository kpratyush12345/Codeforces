//1382B - Sequential Nim
//https://codeforces.com/problemset/problem/1382/B

#include<bits/stdc++.h>
using namespace std;

#define tst               long t;cin>>t;while(t--)
#define rep(i,a,n)         for(int i=a;i<n;i++)
#define M                 1000000007
#define ci                cin>>
#define co                cout<<
#define nw                cout<<"\n"
#define fl                float
#define double            db
#define unsigned          long long ull
#define itr               for(auto it= v.begin();it !=v.end();it++)
#define PI                3.1415926535897932384626
#define pl                pair<ll,ll>
#define mp                make_pair
#define sort              sort(a,a+n) 
#define sortv             sort(v.begin(),v.end()
#define ll                long long
#define pb                push_back
#define vi                vector<int>
#define vl                vector<long long>
#define vll               vector<pair<long long,long long>>
#define vii               vector<pair<int,int>>
#define vvi               vector<vector<int>>
#define maxq(x)           priority_queue<x>
#define minq(x)           priority_queue<x,vector<x>,greater<x>>
#define graph             map<int,vi>
#define vvl               vector<vector<long long>>
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define f                 first
#define s                 second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
# define quick            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
	quick
    tst{
ll n,count=0;cin>>n;ll a[n];
rep(i,0,n){
	cin>>a[i];
}

rep(i,0,n){
	if(a[i]==1) count++;
	else break;
}
if(n==1) cout<<"First"<<endl;
else if(count==n){
	if(count%2!=0) cout<<"First"<<endl;
else cout<<"Second"<<endl;
}
else{
if(count%2==0) cout<<"First"<<endl;
else cout<<"Second"<<endl;
 
}
}
return 0;
}
