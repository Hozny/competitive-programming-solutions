#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x, y; 
    cin >> n >> m; 
    int a[n][n] = {0};
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < n; ++j) { 
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < m; ++i) { 
        cin >> x >> y; 
        a[x-1][y-1] = 1;
        a[y-1][x-1] = 1;
    }
    bool flag = true;
    stack<pair<int, int>> s; 
    int ans = 0;
    while (flag) { 
        flag = false;
        for (int i = 0; i < n; ++i) { 
            int row = 0;
            for (int j = 0; j < n; ++j) { 
                if (a[i][j] == 1) {
                    x = i; y = j;
                    ++row;
                }
            }
            if (row == 1) { 
                s.push({x, y});
                flag = true;
            }
        }
        if (s.empty() == false) ++ans;
        while (s.empty() == false) {
            x = s.top().first;
            y = s.top().second;
            s.pop();
            a[x][y] = 0;
            a[y][x] = 0;
        }
    }
    cout << ans;
}