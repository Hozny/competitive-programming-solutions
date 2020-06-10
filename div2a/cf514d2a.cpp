#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, t, m; 
    int d; 
    cin >> n; 
    m = 1;
    t = 0;
    while (n) { 
        d = n % 10; 
        if (n < 10 && d == 9) { 
            t += d*m;
        } else { 
            t += min(d, 9 - d) * m;
        }
        m *= 10;
        n = n / 10;
    }
    cout << t;
}