//1462C - Unique Number
//https://codeforces.com/problemset/problem/1462/C

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >>t;
while(t--){
  int n;
  cin >> n;
  if(n <= 9){
    cout << n << endl;
  }
  else if(n >= 10 && n <= 17){
      cout << n-9 << "9"<< endl;
  }
  else if(n >= 18 && n <= 24){
      cout << n-8-9 << "89"<<endl;
  }
  else if(n >= 25 && n <= 30){
      cout << n-7-8-9 <<"789"<<endl;
  }
  else if(n >= 31 && n <= 35 ){
      cout << n-6-7-8-9 << "6789" << endl;
  }
  else if(n >= 36 && n <= 39){
      cout << n-5-6-7-8-9 << "56789" << endl;
  }
  else if(n >= 40 && n <= 42){
      cout << n-4-5-6-7-8-9 << "456789" << endl;
  }
  else if(n >= 43 && n<= 44 ){
      cout << n-3-4-5-6-7-8-9 << "3456789" << endl;
  }
  else if(n == 45){
      cout << "123456789" << endl;
  }
  else if(n > 45){
      cout << -1 << endl;
  }
}
return 0;
}
