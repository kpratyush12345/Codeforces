//479A - Expression
//https://codeforces.com/problemset/problem/479/A

#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,c;
cin>>a;
cin>>b;
cin>>c;
int max=0;
if(a+b*c>max){
  max=a+b*c;
}
if(a*(b+c)>max){
  max=a*(b+c);
}
if(a*b*c>max){
  max=a*b*c;
}
if((a+b)*c>max){
  max=(a+b)*c;
}
if(a+b+c>max){
  max=a+b+c;
}
if(a*b+c>max){
  max=a*b+c;
}
cout<<max;
}
