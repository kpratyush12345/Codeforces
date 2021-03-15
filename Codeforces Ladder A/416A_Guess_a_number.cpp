//416A - Guess a number!
//https://codeforces.com/problemset/problem/416/A

#include<bits/stdc++.h>
using namespace std;

int main(){
int a=-2000000000,b=2000000000,n,x;
string s,ans;
cin>>n;
while(n>0){
    n--;
    cin>>s>>x>>ans;
    if(s==">"){
        if(ans=="Y")
        a=max(a,x);
        else
        b=min(x+1,b);
    }
    if(s==">="){
        if(ans=="Y")
        a=max(a,x-1);
        else 
        b=min(x,b);
    }
    if(s=="<"){
        if(ans=="Y") 
        b=min(x,b);
        else
        a=max(a,x-1);
    }
    if(s=="<="){
        if(ans=="Y")
        b=min(x+1,b);
        else 
        a=max(a,x);
    }
}
if(a+2<=b)
cout<<a+1;
else 
cout<<"Impossible";
}
