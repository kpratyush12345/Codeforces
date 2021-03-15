//339A - Helpful Maths
//https://codeforces.com/problemset/problem/339/A

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	char a[100];
	cin >> s;
	int j = 0;
	for (int i = 0;i < s.length();i++)
	{
		if (s[i] != '+')
		{
			a[j] = s[i];
			j++;
		}
	}
	sort(a, a + j);
  for(int k=0;k<j;k++){
    if(k==j-1){cout<<a[k];}
    else cout<<a[k]<<'+';}
	return 0;
}
