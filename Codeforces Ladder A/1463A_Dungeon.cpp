//1463A - Dungeon
//https://codeforces.com/problemset/problem/1463/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
    long long a,b,c;
    cin>>a>>b>>c;
    long long count,res;
    count=a+b+c;
    res=count/9;
    if(count%9 !=0)
    cout<<"NO"<<endl;

    else {
    if(a>=res && b>=res && c>=res)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
   }
 return 0;  
}
