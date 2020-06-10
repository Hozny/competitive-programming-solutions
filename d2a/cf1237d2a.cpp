#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x; 
    cin >> n; 
    int a[n]; 
    bool up = false;
    for (int i = 0; i < n; ++i) { 
        cin >> x; 
        if (up) { 
            if (abs(x) % 2 != 0) { 
                up = false;
            }
            if (x < 0) { 
               x *= -1; 
               x = x / 2;
               x *= -1;
            } else { 
                x = (x + 1) / 2;
            }
        } else { 
            if (abs(x) % 2 != 0) { 
                up = true;
            }
            if (x < 0) { 
                x *= -1; 
                x = (x + 1) / 2;
                x *= -1;
            } else { 
                x = x / 2;
            }
        }
        a[i] = x;
    }
    for (int i = 0; i < n; ++i) { 
        cout << a[i] << endl;
    }
}