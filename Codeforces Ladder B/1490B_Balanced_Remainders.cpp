//1490B - Balanced Remainders
//https://codeforces.com/problemset/problem/1490/B

/*---------------------------------------------------------Efficient ----------------------------------------------------------------*/
 #include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);cout.tie(NULL);
       ll t;
       cin>>t;
       while(t--){
          int n;
	      cin >> n;
	      int c[3] = {0,0,0};
	      for(ll i=0;i<n;i++){
		     int x;
		     cin >> x;
		     c[x%3]++;
	       } 
	ll moves = 0;
	while(1){
		for(ll i=0;i<3;i++){
			if(c[i] > n / 3){
				int diff = c[i] - n / 3;
				c[(i+1)%3] += diff;
				moves += diff;
				c[i] -= diff;
			}
		}
		bool stop = 1;
		for(ll i=0;i<3;i++){
			if(c[i] != n / 3){
				stop = 0;
			}
		}
		if(stop){
			break;
		}
	}
	cout << moves << "\n";
    }
    return 0;
}



/*---------------------------------------------------------Naive approach-------------------------------------------------------------*/
/* Accepted answer */
 #include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);cout.tie(NULL);
     
    ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n];
        ll c0=0,c1=0,c2=0;
	    for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%3==0) c0++;
            if(a[i]%3==1) c1++;
            if(a[i]%3==2) c2++;
        }
        if(c1==c2 && c2==c0){
            cout<<0<<endl;
        }
	    else if((c0>n/3 && c1>n/3 && c2<n/3) || (c1>n/3 && c2>n/3 && c0<n/3) || (c2>n/3 && c0>n/3 && c1<n/3)){
	       ll m = max(c0,max(c1,c2));
	       ll mn = min(c0,min(c1,c2));
	       ll mid =n-(m+mn);
	       if(m==c0 && mn==c1){
	           cout<<2*(c2-n/3)+(c0-n/3)<<endl;
	       }
	       else if(m==c1 && mn==c0){
	           cout<<2*(c1-n/3)+(c2-n/3)<<endl;
	       }
	       else if(m==c2 && mn==c0){
	           cout<< c2-n/3+ 2*(c1-n/3)<<endl;
	       }
	       else if(m==c0 && mn==c2){
	           cout<< c1-n/3+ 2*(c0-n/3)<<endl;
	       }
	       else if(m==c2 && mn==c1){
	           cout<< c0-n/3+ 2*(c2-n/3)<<endl;
	       }
	       else if(m==c1 && mn==c2){
	           cout<< c1-n/3+ 2*(c0-n/3)<<endl;
	       }   
	    }
	    else if((c0>n/3 && c1<=n/3 && c2<=n/3)||(c1>n/3 && c0<=n/3 && c2<=n/3) || (c2>n/3 && c0<=n/3 && c1<=n/3) ){
	        if(c0>n/3){
	            cout<<(n/3-c1)+2*(n/3-c2)<<endl;
	        }
	        else if(c1>n/3){
	            cout<<2*(n/3-c0)+(n/3-c2)<<endl;
	        }
	        else if(c2>n/3){
	            cout<<(n/3-c0)+2*(n/3-c1)<<endl;
	        }
	    }     
	}
   
    return 0;
}
