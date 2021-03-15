//276B - Little Girl and Game
//https://codeforces.com/problemset/problem/276/B

#include <iostream>
#include <string>
#include <string.h>
 
using namespace std;
string s;
int a[30];
int main()
{
    
    cin>>s;
    for (int i=0; i<s.size(); ++i)
        a[s[i]-'a']++;
    int cnt=0;
    for (int i=0; i<26; ++i)
        if (a[i]&1)
            cnt++;
    if ((cnt==0) || (cnt&1))
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
    return 0;
}
