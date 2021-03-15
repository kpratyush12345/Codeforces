//1343B - Balanced Array
//https://codeforces.com/problemset/problem/1343/B

#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
  
void arrayConstruct(ll N){
    for (ll i = 2; i <= N; i = i + 2) 
        cout << i << " "; 
  
    for (ll i = 1; i < N - 1; i = i + 2) 
        cout << i << " "; 

    cout << N - 1 + (N / 2) << endl; 
} 
void createArray(ll N){ 
    if (N % 4 == 0){ 
        cout<<"YES"<<endl;
        arrayConstruct(N); 
    }
    else{
        cout <<"NO"<< endl;
    } 
} 
  
int main(){ 
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        createArray(n); 
    }
    return 0; 
} 
