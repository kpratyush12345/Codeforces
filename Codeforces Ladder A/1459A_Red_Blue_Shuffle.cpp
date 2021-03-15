//1459A - Red-Blue Shuffle
//https://codeforces.com/problemset/problem/1459/A

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    
	    string s1,s2;
	    cin>>s1;
	    cin>>s2;
	    for(int i=0;i<n;i++){
	        a[i]=s1[i]-'0';
	    }
	    
	    for(int i=0;i<n;i++){
	        b[i]=s2[i]-'0';
	    }
	    
	    
	    int c1=0;
	    int c2=0;
	    
	    for(int i=0;i<n;i++){
	        if(a[i]>b[i]){
	            c1++;
	        }
	        else if(b[i]>a[i])
	        c2++;
	    }
	    
	    if(c1==c2)
	    cout<<"EQUAL"<<endl;
	    else if(c1>c2)
	    cout<<"RED"<<endl;
	    else
	    cout<<"BLUE"<<endl;
	}
	
	return 0;
}
