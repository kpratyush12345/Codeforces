//71A - Way Too Long Words
//https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include<string>
#include<set>
using namespace std;
void cmp(string s){
  set<string> string;
  int count=0;
    for (auto it = s.begin()+1; it !=s.end()-1; ++it)
        {count+=1;}
        cout<<s[0]<<count<<s.back()<<endl;;
}
int main() {
  int num;
  string s;
  cin>>num;
  for(int i=0;i<num;i++){
    cin>>s;
    if(s.size()>10){
      cmp(s);}
      else{cout<<s<<endl;}
    }
  }
