//112A - Petya and Strings
//https://codeforces.com/problemset/problem/112/A

#include <iostream>
using namespace std;

string s, p;
int main() {
    cin >> s >> p;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] <= 'Z') {
            s[i] += 32;
        }
        if (p[i] <= 'Z') {
            p[i] += 32;
        }
    }
    if (s < p) {
        cout << -1;
    } else if (s > p) {
        cout << 1;
    } else if (s == p) {
        cout << 0;
    }
}
