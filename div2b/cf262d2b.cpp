#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; 
    cin >> n >> k; 
    int a[n];
    int absmin = INT_MAX;
    int pos;
    for (int i = 0; i < n; ++i) { 
        cin >> a[i];
        if (abs(a[i]) < absmin) { 
            absmin = abs(a[i]);
            pos = i;
        }
    }
    long long sum = 0;
    int x; 
    for (int i = 0; i < n; ++i) { 
        x = a[i];
        if (k > 0) {
            if (x < 0) {
                a[i] *= -1;
            } else { 
                a[pos] *= -1;
            }
            --k;
        } else { 
            break;
        }
    }
    while (k) { 
        a[pos] *= -1;
        --k;
    }
    for (int i = 0; i < n; ++i)
        sum+=a[i];
    cout << sum; 
}