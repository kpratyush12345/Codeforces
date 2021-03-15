//1437B - Reverse Binary Strings
//https://codeforces.com/problemset/problem/1437/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
         string s;
        cin>>n>>s;
        int count=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])
            count++;
        }
        cout<<ceil(count/2.0)<<endl;
    }
    return 0;
}
