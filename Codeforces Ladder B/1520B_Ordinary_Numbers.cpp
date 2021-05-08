//1520B - Ordinary Numbers
//https://codeforces.com/problemset/problem/1520/B

/*-----------------------------------------1st Approach-----------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll cnt_dig(ll n){
    string num = to_string(n);
    return num.size();
}

ll firstDigit(ll n){
    ll digits = (ll)log10(n);
    n = (ll)(n / pow(10, digits));
    return n;
}
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
      
   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      if(n<10){
          cout<<n<<endl;
          continue;
      }
      ll res=0;
      ll d = cnt_dig(n)-1;
      ll p=1;
      while(d--){res+=9;p*=10;}
      ll m =p;
      ll f = firstDigit(n);
      ll x = cnt_dig(n);
      ll s=0;
      while(x--){s+=f*p;p=p/10;}
      res += f;
      if(n<s) res-=1;
      cout<<res<<endl; 
   }
   return 0;
}

/*-----------------------------------------2nd Approach-----------------------------------------------------------*/
#include <iostream>
using namespace std;
 
int main()
{long long t,n,p=0;
cin>>t;
while(t--)
{long long cnt=0,s;
p=9;
    cin>>n;
    while(n>p)
    {p=p*10+9;
    cnt++;}
    s=cnt*9+n/(p/9);
    cout<<s<<'\n';
 
}
    return 0;
}
