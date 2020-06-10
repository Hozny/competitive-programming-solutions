#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, q, l , r; 
    int a[10001] = {0}; 
    int b[10001] = {0};
    cin >> p >> q >> l >> r; 
    int x, y; 
    for (int i = 0; i < p; ++i) { 
        cin >> x >> y; 
        for (int j = x; j<=y; ++j) { 
            a[j] = 1;
        }
    }
    for (int i = 0; i < q; ++i) { 
        cin >> x >> y; 
        for (int j = x; j <=y; ++j) { 
            b[j] = 1;
        }
    }
    int ans = 0; 
    
    for (int i = l; i <= r; ++i) { 
        int add = 0;
        for (int j = i; j <= 1000; ++j) { 
            if (b[j - i] == 1 && a[j] == 1) { 
                add = 1;
                break;
            }
        }
        ans += add;
    }
    cout << ans;
}