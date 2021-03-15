//144A - Arrival of the General	
//https://codeforces.com/problemset/problem/144/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],max=0,min=101,maxi,mini;
    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i]>max){
        max=a[i];
        maxi=i;
    }
    
        if(a[i]<=min){
        min=a[i];
        mini=i;
    }
    }
    if(maxi>mini)
    mini++;
    cout<<maxi+(n-1)-mini;
    return 0;
}
