#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, x; 
    int in; 
    cin >> t; 
    for (int ti = 0; ti < t; ++ti) { 
        cin >> n >> x; 
        int odd= 0 ; 
        int even = 0; 
        for (int i = 0; i < n; ++i) { 
            cin >> in; 
            if (in % 2 == 0) { 
                ++even; 
            } else { 
                ++odd;
            }
        }
        int pairs = 0;
        int ans = 0;
        if (odd == 0) { 
            cout << "No" << endl;
        } else { 
            odd -= 1;
            ans += even + 1; 
            odd = odd/2;
            if (ans >= x) { 
                cout << "Yes" << endl;
                continue;
            } 
            if (x - ans <= odd && (x - ans) % 2 == 0) {
                cout << "Yes" << endl;
            } else { 
                cout << "No" << endl;
            }
        }
    }
}