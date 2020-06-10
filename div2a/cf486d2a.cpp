#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n; 
    cin >> n;
    if (!(n & 1)) { 
        n = (n + 1) / 2;
        cout << n;
    } else { 
        n = (n + 1) / 2;
        cout << -1*n;
    }
}