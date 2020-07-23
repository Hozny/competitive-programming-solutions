#include <climits>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <bits/stdc++.h>
#define fileio freopen("input.txt", "r", stdin),freopen("out.txt", "w", stdout)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define ll long long

using namespace std;
/* problem: https://www.spoj.com/problems/BITMAP/ */
vector<vector<int>> a; 
vector<vector<int>> d;
set<pair<int, int>> vis;
int n, m;
int dy[4] = {1,-1,0,0};
int dx[4] = {0, 0,1,-1};
vector<pair<int, int>> bfsv; 
                    void bfs(int add) { 
    int count = 0, added = add;
    int dep = 0;
    while (bfsv.size() > 0) { 
        count = 0;
        for (int ff = 0; ff < added; ++ff) { 
            int ty = bfsv[0].first;
            int tx = bfsv[0].second;
            d[ty][tx] = min(d[ty][tx], dep);
            bfsv.erase(bfsv.begin());
            for (int l = 0; l < 4; ++l) { 
                int cy = ty + dy[l], cx = tx + dx[l];
                if (cy>=0&&cx>=0 && cy<n && cx<m) { 
                    if (vis.count({cy, cx}) == 0) { 
                        bfsv.push_back({cy, cx});
                        vis.insert({cy, cx});
                        ++count;
                    }
                }
            }
        }
        ++dep;
        added = count;
    }
}
int main() {
    SPEED;
    int t; 
    cin >> t; 
    while (t--) {
        cin >> n >> m; 
        a = vector<vector<int>>(n, vector<int>(m));
        d = vector<vector<int>>(n, vector<int>(m, INT_MAX));
        vector<pair<int, int>> v;
        for (int i = 0; i < n; ++i) { 
            for (int j = 0; j < m; ++j) { 
                char c;
                cin >> c;
                a[i][j] = c-'0';
                if (c-'0' == 1) v.push_back({i, j});
            }
        }
        for (int i = 0; i < v.size(); ++i) { 
            vis.clear();
            bfsv.push_back({v[i].first, v[i].second});
        }
        bfs(v.size());
        for (int i = 0; i < n; ++i) { 
            for (int j = 0; j < m; ++j) { 
                cout << d[i][j] << " ";
            } cout << endl;
        } cout << endl;
    }
}