//230B - T-primes
//https://codeforces.com/problemset/problem/230/B

#include<bits/stdc++.h>
using namespace std;


const int MOD = 1000000007;
const int MAX = 1000001;
bool prime[MAX];
void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}

int main (void){
    

    sieve ();

    int t;
    long long d, n,r;

    cin>>t;

    while (t--)
    {
        cin>>n;

        r = sqrt(n);

        if (!prime[r] && r*r == n)
            cout<<"YES"<<"\n";
        else
           cout<<"NO"<<"\n";
    }

    return 0;
}
