//1445B - Elimination
//https://codeforces.com/problemset/problem/1445/B

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
     int a[4];
     int b,c,total;
     for(int i=0;i<4;i++)
     cin>>a[i];
    b=a[0]+a[1];
    c=a[2]+a[3];
        total=max(b,c);
        cout<<total<<endl;
        
    }
    return 0;
}
