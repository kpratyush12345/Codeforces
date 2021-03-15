//1413B - A New Technique
//https://codeforces.com/problemset/problem/1413/B

#include<bits/stdc++.h>
using namespace std;
 
#define tst               long t;cin>>t;while(t--)          
#define ll                long long
 
int main(){
    tst{
    	int n,m;
    	cin>>n>>m;
    	int col[m*n+1],row[m*n+1];
    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			int a;
    			cin>>a;
    			col[a]=j;
    		}
    	}
    	for(int i=0;i<m;i++){
    		for(int j=0;j<n;j++){
    			int a;
    			cin>>a;
    			row[a]=j;
    }
    }
    int ans[n][m];
    for(int i=1;i<(n*m)+1;i++)
    ans[row[i]][col[i]]=i;
    for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			cout<<ans[i][j]<<" ";
    			}
    			cout<<endl;
    			}
    		}	
    return 0;
}
