//339B - Xenia and Ringroad
//https://codeforces.com/problemset/problem/339/B

#include <iostream>
using namespace std;
int main() {
int n,m;
int x;
cin>>n >>m;
int front=1;
long long int count=0;
for(int i=0;i<m;i++){
  cin>>x;
  if(x>=front){
    count += x - front;
  }
  else{
    count += n - (front -x);
  }
  front=x;
}
cout<<count;
return 0;
}
