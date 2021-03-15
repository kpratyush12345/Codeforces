//476A - Dreamoon and Stairs
//https://codeforces.com/problemset/problem/476/A

#include <iostream>
using namespace std;
int main() {
    int x, n, m;
    cin >>n>>m;
    
        if (m>n)
            x=-1;
        else
        {
            if (n%2==0)
                x=n/2;
            else
                x=(n/2)+1;
            while(x%m != 0)
            {
                x++;
            }
        }
        cout<<x;
    return 0;
}
