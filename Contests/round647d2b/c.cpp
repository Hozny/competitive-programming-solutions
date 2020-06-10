#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t; 
    long long n; 
    for (int ti = 0; ti < t; ++ti) { 
        cin >> n; 
        long long p = log2(n);
        long long x = p + 1;
        long long remain = n - (pow(2,p) + 1);
        long long smallest = x - remain/2;
        long long ans = (n/2 + (n%2));
        cout << x << " " << remain << endl;
        ans += (x-1)*(2 + x) /2; 
        ans += (remain-1)*(smallest + x-1)/2; 
        cout << ans << endl << endl;
    }
}