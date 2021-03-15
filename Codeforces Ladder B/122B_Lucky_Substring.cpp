//122B - Lucky Substring
//https://codeforces.com/problemset/problem/122/B

#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
int count_4=0,count_7=0;
for(int i=0;i<s.size();i++){
  if(s[i]=='4'){
    count_4 += 1;
  }
  if(s[i]=='7'){
    count_7 += 1;
  }
}
if(count_4==0 && count_7==0){
  cout<<"-1"<<endl;
  return 0;
}
if(count_4>=count_7){
  cout<<"4"<<endl;
}
if(count_7>count_4){
  cout<<"7"<<endl;
}
return 0;
}
