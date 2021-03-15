//1399C - Boats Competition
//https://codeforces.com/problemset/problem/1399/C

#include <bits/stdc++.h>
#define ll long long
 
using namespace std;

int main(){
 
    int i,t,j,n;
    ll w[1001];
    cin >> t;
    while(t--){
        ll ans=0,cnt;
        cin >> n;
        for(i=0;i<n;i++) cin >> w[i];
        sort(w,w+n);
 
        for(ll k=1;k<101;k++){
            i=0,j=n-1,cnt=0;
            while(i<j){
                if(w[i]+w[j]==k){
                    i++,j--;
                    cnt++;
                }
                else if(w[i]+w[j]<k) i++;
                else j--;
            }
            if(ans<cnt) ans=cnt;
        }
 
        cout << ans;
        cout << "\n";
    }
 
}
