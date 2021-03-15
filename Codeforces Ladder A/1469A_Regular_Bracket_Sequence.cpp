//1469A - Regular Bracket Sequence
//https://codeforces.com/problemset/problem/1469/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int flag=0;
        if(s.size()%2!=0)
        flag=1;
        else
      if(s[0]==')' || s[s.length()-1]=='(')
        flag=1;
        if(flag==1)
        cout<<"No"<<"\n";
        else
        cout<<"Yes"<<"\n";
    }
    return 0;
}
