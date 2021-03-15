//1466A - Bovine Dilemma
//https://codeforces.com/problemset/problem/1466/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        set<int> s;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                s.insert(abs(a[i]-a[j]));
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
