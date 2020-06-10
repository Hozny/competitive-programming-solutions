#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    char c, t, r;
    string ans = "YES";
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < n; ++j) { 
            cin >> c;
            if (i == 0 && j == 0) { 
                t = c;
            } else if (i == 0 && j == 1) { 
                r = c;
            } else if (i == j || i == n - j - 1){ 
                if (c != t)
                    ans = "NO";
            } else if (c != r || r == t) { 
                ans = "NO";
            } 
        }
    }
    cout << ans;
}