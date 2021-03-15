//1354B - Ternary String
//https://codeforces.com/problemset/problem/1354/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        char S[200001];
        cin>>S;
        int l=strlen(S);
        int one=0,two=0,three=0,s=200001,x,y,z;
        for(int i=0;i<l;i++){
            if(S[i]=='1') one=i+1;
            if(S[i]=='2') two=i+1;
            if(S[i]=='3') three=i+1;
            if(one>0&&two>0&&three>0){
                x=max(one,two),y=min(one,two);
                z=max(x,three)-min(y,three)+1;
                if(z<s) s=z;
            }
        }
        if(s==200001) cout<<0<<endl;
        else cout<<s<<endl;
    }
    return 0;
}
