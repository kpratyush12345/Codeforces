//1471B - Strange List
//https://codeforces.com/problemset/problem/1471/B

#include <bits/stdc++.h>
typedef long long int ll;
 
using namespace std;
 
int main(){
 
	int t;
	cin >> t;
	for (int tt = 0; tt < t; tt++)
	{
		int n;
		long long int x;
		cin >> n >> x;
		long long int a[n];
		long long int dp[n][100] = {0};
		long long int ans = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			ans = ans + a[i];
			int j = 0;
			dp[i][j] = a[i];
			j++;
			while (a[i] % x == 0)
			{
				a[i] = a[i] / x;
				dp[i][j] = a[i];
				j++;
			}
		}
		int flag = 0;
			
		
		for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < n; j++)
			{
 
				if (dp[j][i + 1] != 0)
				{
					ans += dp[j][0];
				}
				else
				{
					flag = 1;
					break;
				}
			}
			if (flag == 1)
				break;
		}
		cout << ans << endl;
		}
	return 0;
}
