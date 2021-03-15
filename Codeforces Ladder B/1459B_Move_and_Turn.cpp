//1459B - Move and Turn
//https://codeforces.com/problemset/problem/1459/B

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n,res;
 cin>> n;
 if(n==1)
 	res=4;
 	
 	else{
 	    if(n%2==0)
 	    res=(n/2+1)*(n/2+1);
 	    if(n%2!=0)
 	    res=2*(n/2+1)*(n/2+2); 
 	}
 	cout<<res;
}
 	
