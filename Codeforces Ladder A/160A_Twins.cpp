//160A - Twins
//https://codeforces.com/problemset/problem/160/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int nw=0;
    int count=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    sum+=a[i];
    sort(a, a + n, greater<int>());

    for(int i=0;i<n;i++){
    nw+=a[i];
    count++;
        if(nw>sum/2)
        break;
    }
    
    cout<<count<<endl;
    
    return 0;
}
