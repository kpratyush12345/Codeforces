//1461A - String Generation
//https://codeforces.com/problemset/problem/1461/A

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n,k;
cin>>n>>k;
string str = {'b','c','a'};
string s;
for(long long int i=0; i<k; i++){
  s += 'a';
}
int j=0;
for(long long int i=0;i<n-k;i++){
    s += str[j];
    j++;
    if(j==3){
        j=0;
    }
}
cout<<s<<endl;
}
return 0;
}
