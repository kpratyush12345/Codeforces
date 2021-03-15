//1433C - Dominant Piranha
//https://codeforces.com/problemset/problem/1433/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long  n;
        cin>>n;
        long long arr[n],b[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            b[i]=arr[i];
            }
        sort(b,b+n);
       long long  mx=b[n-1];
        if(b[0]==b[n-1])
        cout<<"-1"<<endl;
        else{
        for(long long i=0;i<n;i++){
            
            if(arr[i]==mx){
                if(mx>arr[i-1] && i-1>=0|| mx>arr[i+1] && i+1<n){
                cout<<i+1<<endl;
                break;
                
            }
            }
            
        }
        }
        
    }
    return 0;
}
