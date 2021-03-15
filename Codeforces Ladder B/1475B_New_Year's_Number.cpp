//1475B - New Year's Number
//https://codeforces.com/problemset/problem/1475/B

#include <bits/stdc++.h> 
using namespace std; 

bool solution( int n) 
{ 
	for (int i = 0; i * 2020 <= n; i++) { 

		if ((n - (i * 2020)) % 2021 == 0) { 
			return true; 
		} 
	} 
return false;
} 


int main() 
{ 
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(solution(n)){
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
} 
