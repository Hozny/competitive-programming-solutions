#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    m = 1 + ((m - 1) / a);
    n = 1 + ((n - 1) / a);
    cout << n * m;
}