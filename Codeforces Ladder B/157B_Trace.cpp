//157B - Trace
//https://codeforces.com/problemset/problem/157/B

#include <bits/stdc++.h>
#define pi 3.1415926536
using namespace std;

int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}
sort(a,a+n,greater<int>());
double sum=0;
if(n%2==0){
  for(int i=0;i<n-1;i++){
    sum += pi*(pow(a[i],2)-pow(a[i+1],2));
    i++;
  }
}
if(n%2!=0){
  for(int i=0;i<n-2;i++){
    sum += pi*(pow(a[i],2)-pow(a[i+1],2));
    i++;
  }
  sum += pi*pow(a[n-1],2);
}
cout<<fixed<<setprecision(10)<<sum<<endl;
return 0;
}
