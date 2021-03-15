//478B - Random Teams
//https://codeforces.com/problemset/problem/478/B

#include <bits/stdc++.h>
using namespace std;
int main() {
long long int n,m;
cin>>n>>m;
long long int num=0,num2=0,max=0,min=0;
    long long int a=n-(m-1);
    max=a*(a-1)/2;
    if(n%m==0){
        num=n/m;
        min=((num*(num-1))/2)*m;
    }
    else{
        num=(n/m);
        num2=n%m;
        min = ((num*(num-1))/2)*(m-num2);
        min += (((num+1)*num)/2)*num2;
    }
    cout<<min<<" "<<max<<endl;
  return 0;
}
