//1293B - JOE is on TV!
//https://codeforces.com/problemset/problem/1293/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

double sum(int n){ 
    double i, s = 0.0; 
    for (i = 1; i <= n; i++) 
    s = s + 1/i; 
    return s; 
} 

int main() {
    ll n;
    cin>>n;
    cout << fixed << setprecision(12) <<sum(n)<<endl;
	return 0;
}
