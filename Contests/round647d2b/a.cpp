#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n; 
    long long a, b, t, q; 
    for (int ti = 0; ti < n; ++ti) { 
        cin >> a >> b; 
        if (a < b) { 
            t = a; 
            a = b; 
            b = t; 
        }
        long long div = a / b + (a % b); 
        if ((div & (div - 1)) == 0 && (div * b == a)) { 
            long long ans = log2(div);
            long long finans = 0; 
            while (ans >= 3) { 
                ans -= 3; 
                finans += 1;
            }
            while (ans >= 2) { 
                ans -= 2; 
                finans += 1;
            }
            
            cout << finans + ans << endl;
        } else { 
            cout << -1 << endl;
        }
    }
}