#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n; 
    cin >> t; 
    for (int ti = 0; ti < t; ++ti) { 
        cin >> n; 
        int x; 
        int odd = 0;
        int even = 0;
        int out = 0;
        for (int i = 0; i < n; ++i) { 
            cin >> x;
            if (x%2==0) { 
                ++even;
            } else { 
                ++odd;
            }
            if (x%2!=i%2) { 
                ++out;
            }
        }
        if (n%2==0) { 
            if (odd == n/2 && even == n/2) { 
                cout << out/2;
            } else { 
                cout << -1;
            }
        } else { 
            if (odd == n/2 && even == (n+1)/2) { 
                cout << out/2;
            } else { 
                cout << -1;
            }
        }
        cout << endl;
    }
}