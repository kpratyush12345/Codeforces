//313A - Ilya and Bank Account
//https://codeforces.com/problemset/problem/313/A

#include <bits/stdc++.h>
using namespace std;
int main() {
long long int n;
cin>>n;
int ones,tens;
if(n>0){
  cout<<n;
}
else{
  n=abs(n);
  ones=n%10;
  tens=(n/10)%10;
  if(ones>=tens){
    cout<<-n/10;
  }
  if(tens>ones){
    cout<<(-(n-n%100)/10)-ones;
  }
}
return 0;
}
