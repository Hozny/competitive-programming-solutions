#include <bits/stdc++.h>

using namespace std;

int main() {
        ios_base::sync_with_stdio(false);

    int sx, sy, ex, ey, t; 
    cin >> sx >> sy >> ex >> ey; 
    cin >> t; 
    set<pair<int, int>> cells;
    int x1, x2, y;
    for (int i = 0; i < t; ++i) { 
        cin >> y >> x1 >> x2;
        for (int j = x1; j <= x2; ++j) { 
            cells.insert(make_pair(y, j));
        }
    }
    queue<vector<int>> qu;
    vector<int> temp = {sx, sy, 0};
    qu.push(temp);
    int ans = -1;
    int dx[8] = {1, 0, -1, 0, 1, -1, 1, -1};
    int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};
    set<pair<int, int>> vis;
    while (qu.size() > 0) { 
        int curx = qu.front()[0];
        int cury = qu.front()[1];
        int curd = qu.front()[2];
        vis.insert(make_pair(curx, cury));
        qu.pop();
        if (curx == ex && cury == ey) { 
            ans = curd; 
            break;
        }
        for (int i = 0; i < 8; ++i) { 
            temp[0] = curx + dx[i];
            temp[1] = cury + dy[i];
            temp[2] = curd + 1;
            pair<int, int> newp = { temp[0], temp[1] };
            if (temp[0] == ex && temp[1] == ey) { 
                ans = curd; 
                break;
            }
            if (cells.count(newp) && !vis.count(newp)) { 
                qu.push(temp);
            }
        }
    }

    cout << ans;
}