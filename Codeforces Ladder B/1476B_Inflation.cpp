//1476B - Inflation
//https://codeforces.com/problemset/problem/1476/B

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long double k;
		cin>>n>>k;
		long double a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		long double s1=0,s2=0;
		for(int i=1;i<n;i++){
			s2+=a[i-1];
			s1+=a[i-1];
			if((a[i]/s1*100)>k){
				long double s = ceil((a[i]*100/k)-s1);
				s1+=s;
			}
		}
		cout<<(long long int)(s1-s2)<<"\n";
	}
	return 0;
}
