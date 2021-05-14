//1512D - Corrupted Array
//https://codeforces.com/problemset/problem/1512/D

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int t;
   cin >>t;
   for (int y=0;y<t;y++)
   {
       int n;
       cin >>n;
       int b[n+2];
       for (int x=0;x<n+2;x++)
       {
           cin >>b[x];
       }
sort (b,b+n+2);
long long int sum=0;
for (int x=0;x<n+2;x++)
{
    sum=sum+b[x];
}
 
int a=0;
    for (int j=0;j<n+1 &&a==0;j++)
    {
        if (sum-b[j]-b[n+1]==b[n+1]||sum-b[n+1]-b[j]==b[j])
            {for (int k=0;k<n+2;k++)
            {if (k!=n+1&&k!=j) {cout<<b[k]<<" ";} } a=1; }
    }
 
if (a==0) {cout<<-1;}
  cout<<endl; }
}
