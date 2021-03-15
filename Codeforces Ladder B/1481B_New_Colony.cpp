//1481B - New Colony
//https://codeforces.com/problemset/problem/1481/B

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
	   int n, k;
	cin >> n >> k;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int p = 0;
	int f = 0;
	while (p < n && k > 0 )
	{
		int stopped = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i + 1] > a[i])
			{
				a[i]++;
				p = i + 1;
				stopped = 1;
				k--;
				break;
			}
		}
		if(stopped)
			continue;

		else
		{
			f = 1;
			cout << -1 << "\n";
			break;
		}
	}
	if (f == 0)
		cout << p << "\n";
	}
	return 0;
}
