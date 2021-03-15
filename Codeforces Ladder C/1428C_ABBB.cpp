//1428C - ABBB
//https://codeforces.com/problemset/problem/1428/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(ll i=0; i<s.length(); i++){
            if(s[i] == 'A' && s[i+1] == 'B'){
                s.erase(s.begin()+i+1);
                s.erase(s.begin()+i);
                i -= 2;
            }
            else if(s[i] == 'B' && s[i+1] == 'B'){
                s.erase(s.begin()+i+1);
                s.erase(s.begin()+i);
                i -= 2;
            }
        }
        cout<<s.length()<<endl;
    }

    return 0;
}
