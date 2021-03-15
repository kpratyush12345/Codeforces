//439A - Devu, the Singer and Churu, the Joker
//https://codeforces.com/problemset/problem/439/A

#include <iostream>
using namespace std;
int main()
{
    
    
    int n, x, d;
	cin >> n >> d;
	int res = 0;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		res += x;
	}
	if (d < (res + (n - 1) * 10))
		cout << "-1";
	else {
		cout << (d - res) / 5;
	}
	return 0;
}
