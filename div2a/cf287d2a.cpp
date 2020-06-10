#include <bits/stdc++.h>

using namespace std;

int main() {
    int m[4][4]; 
    string ans = "NO";
    int sum = 0;
    char c;
    for (int i = 0; i < 4; ++i) { 
        for (int j = 0; j < 4; ++j) { 
            cin >> c; 
            m[i][j] = (c == '#');
        }
    }
    for (int i = 0; i < 3; ++i) { 
        for (int j = 0; j < 3; ++j) { 
            sum = m[i][j] + m[i][j+1] + m[i+1][j] + m[i+1][j+1];
            if (sum != 2) { 
                ans = "YES";
            }
        }
    }
    cout << ans;
}