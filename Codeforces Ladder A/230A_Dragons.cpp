//230A - Dragons
//https://codeforces.com/problemset/problem/230/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n,flag=0;
    cin>>s>>n;
    pair<int,int>a[10000];
    for(int i=0;i<n;i++)
    cin>>a[i].first>>a[i].second;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(s<=a[i].first){
        flag=1;
        break;
        }
        else{
            s+=a[i].second;
        }
    }
    if(flag==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
    
}
