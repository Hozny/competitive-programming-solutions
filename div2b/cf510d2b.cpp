#include <iostream>
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

int main() {
    SPEED;
    int n, m; 
    cin >> n >> m; 
    char a[n][m];
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            cin >> a[i][j];
        }
    }
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    bool found = false; 
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            set<pair<int, int>> vis; 
            queue<vector<int>> q; 
            q.push({i, j, i, j});
            vis.clear();
            while (q.size() > 0) { 
                int cx = q.front()[0];
                int cy = q.front()[1];
                for (int i = 0; i < 4; ++i) { 
                    if(cx + dx[i] < n && cx + dx[i] >= 0 && cy + dy[i] >= 0 && cy + dy[i] < m) { 
                        if(a[cx+dx[i]][cy+dy[i]] == a[cx][cy] && q.front()[2] != cx+dx[i] && q.front()[3] != cy+dy[i] && vis.count({cx+dx[i], cy+dy[i]})) { 
                            found = true;
                        }
                    }
                }
                if (found)
                    break;
                q.pop();
                
                vis.insert({cx, cy});
                for (int i = 0; i < 4; ++i) { 
                    if (cx + dx[i] < n && cx + dx[i] >= 0 && cy + dy[i] >= 0 && cy + dy[i] < m && a[cx+dx[i]][cy+dy[i]] == a[cx][cy] && !vis.count({cx+dx[i], cy+dy[i]})) { 
                            q.push({cx+dx[i], cy+dy[i], cx, cy});
                    }
                }
            }
            if(found)break;
        }
        if(found)break;
    }
    if (found) { 
        cout << "Yes";
    } else { 
        cout << "No";
    }
}