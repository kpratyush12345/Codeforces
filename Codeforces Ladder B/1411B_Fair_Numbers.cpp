//1411B - Fair Numbers
//https://codeforces.com/problemset/problem/1411/B

#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        long long n;
        cin >> n;
        
        long long m = n;
        
        while (n!=0)
        {
            long long k = m;
            int flag = 1;
            
            while (k != 0)
            {
                int last = k % 10;
                k /= 10;
                
                if (last != 0 && m % last != 0)
                    flag = 0;
            }
         
            if (flag==0)
            {
                m++;
            }
            else
            {
                cout << m << '\n';
                break;
            }
        }
        
    }
    
    return 0;
}
