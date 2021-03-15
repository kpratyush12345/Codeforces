//1384A - Common Prefixes
//https://codeforces.com/problemset/problem/1384/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   ll t;
   cin>>t;
   while(t--){
       int n;
    cin >> n;

    string s(200, 'a');
    cout << s << endl;

    for (int i = 0; i < n; ++i)
    {
        int u;
        cin >> u;
        s[u] = s[u] == 'a' ? 'b' : 'a';
        cout << s << endl;
    }
   }
   return 0;
}
