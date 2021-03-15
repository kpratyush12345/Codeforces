//1468N - Waste Sorting
//https://codeforces.com/problemset/problem/1468/N

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll t;
   cin>>t;
   while(t--){
       ll c1,c2,c3;
       cin>>c1>>c2>>c3;
       ll a1,a2,a3,a4,a5;
       cin>>a1>>a2>>a3>>a4>>a5;
       if(c1<a1 || c2<a2 || c3<a3){
           cout<<"NO"<<endl;
           continue;
       }
       c1=c1-a1;
       c2=c2-a2;
       c3=c3-a3;
       if(a4<=c1+c3){
			if (a4-c1>=0){
				if(a5<=c2+c3-(a4-c1)){
					cout<<"YES"<<endl;
				} else {
					cout<<"NO"<<endl;
				}
			}
            if(a4-c1<0){
				if(a5<=c2+c3){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
			}
       }
       else{
           cout<<"NO"<<endl;
       }
   }
return 0;
}
