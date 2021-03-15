//1454D - Number into Sequence
//https://codeforces.com/problemset/problem/1454/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
    ll t;
    cin>>t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> v;
        ll m = 0, mi = 0;
        for (ll i = 2; i * i <= n; i++){
            ll c = 0;
            ll z = n;
            while (z % i == 0){
                z = z / i;
                c++;
            }
            if (c > m){
                m = c;
                mi = i;
            }
        }
        if (mi == 0){
            cout << 1 << endl;
            cout << n << endl;
        }
        else{
            cout << m << endl;
            while (n % (mi*mi) == 0){
                cout << mi << " ";
                n = n / mi;
            }
            cout << n << endl;
        }
    }
return 0;   
}
