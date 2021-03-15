//1362A - Johnny and Ancient Computer
//https://codeforces.com/problemset/problem/1362/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
      ll a ,b;
      cin>>a>>b;
      ll count=0;
      if(a==b){
        cout<<"0"<<endl;
        continue;
      }
      else if(a<b){
        while(a<b){
        if(a*8<=b){count++;a=a*8;}
        else if(a*4<=b){count++;a=a*4;}
        else if(a*2<=b){count++;a=a*2;}
        else{break;}
        }
      }
      else{
        while(a>b){
        if(a%8==0 && a/8>=b){count++;a=a/8;}
        else if(a%4==0 && a/4>=b){count++;a=a/4;}
        else if(a%2==0 && a/2>=b){count++;a=a/2;}
        else{break;}
        }
      }
      if(a==b){
        cout<<count<<endl;
      }
      else{
        cout<<"-1"<<endl;
      }
    } 
	return 0;
}
