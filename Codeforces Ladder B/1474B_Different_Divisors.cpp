//1474B - Different Divisors
//https://codeforces.com/problemset/problem/1474/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int NextPrime(int a)
{

    while (!isPrime(++a)) 
    { }
    return a;

}

int main(){
   ll t;
   cin>>t;
   while(t--){
       ll d;
       cin>>d;
       ll a[3];
       a[0]=1;
       for(ll i=1;i<3;i++){
           if(isPrime(a[i-1]+d)){
               a[i]=a[i-1]+d;
           }
           else{
               a[i]=NextPrime(a[i-1]+d);
           }
       }
       cout<<a[1]*a[2]<<endl;
   }
return 0;
}
