//1475C - Ball in Berland
//https://codeforces.com/problemset/problem/1475/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a, b, k;
		cin>>a>>b>>k;
		ll boy[k], cnt1[a + 1] = {0};
		ll girl[k], cnt2[b + 1] = {0};

		for (int i = 0; i < k; i++){
			cin >> boy[i];
			cnt1[boy[i]]++;
		}
		for (int i = 0; i < k; i++){
			cin >> girl[i];
			cnt2[girl[i]]++;
		}
		ll cnt=0;
		for (int i = 0; i < k; i++){
			cnt+=k-(cnt1[boy[i]] + cnt2[girl[i]] )+1 ;
		}
		cout<<cnt/2;
		cout<<endl;
    }
	return 0;
}
