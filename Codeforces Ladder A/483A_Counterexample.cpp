//483A - Counterexample
//https://codeforces.com/problemset/problem/483/A

#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
long long int l,r;
cin>>l>>r;
if(r-l<2){
  cout<<"-1"<<endl;
  return 0;
}
int flag =0;
for(long long int  i = l; i <= r; i++){
  for(long long int  j = i+1; j <= r; j++){
    for(long long int k = j+1; k <= r; k++){
      if(gcd(i,j) == 1 && gcd(j,k) == 1 && gcd(i,k) != 1){
        cout << i << " " << j << " " << k << "\n";
        flag=1;
        break;
      }
    }
  if(flag==1){break;}
  }
if(flag==1){break;}
}
if(flag!=1){cout<<"-1"<<endl;}
return 0;
}
