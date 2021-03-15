//1443A - Kids Seating
//https://codeforces.com/problemset/problem/1443/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   for(int i=1;i<=n;i++)
	   cout<<((4*n)-(2*i))<<"\t"<<" "<<endl;
	}
	
	return 0;
}
	

	
