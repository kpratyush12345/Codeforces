//499B - Lecture
//https://codeforces.com/problemset/problem/499/B

#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
int n,m;
cin>>n>>m;
pair<string,string>p[m];
    for(int i=0;i<m;i++){
    cin>>p[i].first>>p[i].second;
    }
string s[n];
for(int i=0;i<n;i++){
cin>>s[i];
}
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    if(s[i]==p[j].first || s[i]==p[j].second){
        if(p[j].first.size()==p[j].second.size()){
            cout<<s[i]<<" ";
            break;
        }
        if(p[j].first.size()<p[j].second.size()){
          cout<<p[j].first<<" ";
        }
        else{
          cout<<p[j].second<<" ";
        }
    }
    }
}
}
