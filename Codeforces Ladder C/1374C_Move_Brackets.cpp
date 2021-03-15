//1374C - Move Brackets
//https://codeforces.com/problemset/problem/1374/C

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n;i++){
			if(s[i]=='('){
        count++;
      } 
			else {
				count--;
				if (count < 0) {
					count=0;
				}
			}
		}
    cout<<count<<endl;
  }
  return 0;
}
