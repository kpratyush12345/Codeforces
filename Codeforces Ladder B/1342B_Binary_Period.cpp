//1342B - Binary Period
//https://codeforces.com/problemset/problem/1342/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s,p;
        cin>>s;
        string a = {'0'};
        string b = {'1'};
        p=s;
        sort(p.begin(), p.end());
        if(p[0]==p[p.length()-1]){
        if(p[0]=='0' && p[p.length()-1]=='0')
        cout<<p<<endl;
        else if(p[0]=='1' && p[p.length()-1]=='1')
        cout<<p<<endl;
        }
        else{
        
        for(ll i=0;i<s.length()-1;i++){
          if(s[i]=='1' && s[i+1]=='1'){
            s.insert(i+1,a);
          }
          if(s[i]=='0' && s[i+1]=='0'){
            s.insert(i+1,b);
          }
        }
        cout<<s<<endl;
    }    
    }
    return 0;
}
