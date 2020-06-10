#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, l, r, c; 
    int f[7];
    cin >> n >> x; 
    string ans = "YES";
    for (int i = 0; i < n; ++i) { 
        memset(f, 0, 7 * sizeof(int));
        c = 0;
        x = 7 - x;
        cin >> l >> r;
        f[l] = 1; f[7-l] = 1; f[r] = 1; f[7 - r] = 1;
        f[x] = 1;
        for (int j = 1; j <= 6; ++j) { 
            if (f[j] == 0) { 
                x = j;
                c+=1;
            }
        }
        if (c >= 2) { 
            ans = "NO";
        }
    }
    cout << ans;
}