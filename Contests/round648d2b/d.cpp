#include <bits/stdc++.h>

using namespace std;
bool ans = true;

int t, n, m; 
bool solve(int x, int y, vector<vector<char>> a) { 
    queue<pair<int,int>> qu;
    qu.push({x, y});
    int dx[4] = { 1, 0, -1, 0};
    int dy[4] = { 0, 1, 0, -1};
    set<pair<int,int>> vis; 
    
    bool found = false;
    while (qu.size() > 0) { 
        int tx = qu.front().first;
        int ty = qu.front().second;
        qu.pop();
        vis.insert({tx, ty});
        if (tx == (n-1) && ty == (m-1)) { 
            found = true;
            break;
        }
        for (int i = 0; i < 4; ++i) { 
            int nx = tx + dx[i];
            int ny = ty + dy[i];
            if ((nx >= 0 && nx < n) && (ny >= 0 && ny < m)) { 
                if (a[nx][ny] != '#' && vis.count({nx, ny}) == 0) { 
                    qu.push({nx, ny});
                }
            }
        }
    }
    return found;
}
int main() {
    cin >> t; 
    vector<pair<int,int>> bads;
    vector<pair<int,int>> goods;
    for (int ti = 0; ti < t; ++ti) { 
        cin >> n >> m; 
        vector<vector<char>> a; 
        vector<char> temp;
        char tempx;
        a.clear();
        temp.clear();
        goods.clear();
        bads.clear();
        for (int i = 0; i < n; ++i) { 
            for (int j = 0; j < m; ++j) { 
                cin >> tempx;
                if (tempx == 'B') { 
                    bads.push_back({i,j});
                } else if (tempx == 'G') { 
                    goods.push_back({i,j});
                }
                temp.push_back(tempx);
            }
            a.push_back(temp);
            temp.clear();
        }
        // check every possible good
        bool ans = true;
        
            for (int i = 0; i < n; ++i) { 
                for (int j = 0; j < m; ++j) { 
                    if (a[i][j] == '.') { 
                        a[i][j] = '#';
                        for (int r = 0; r < goods.size(); ++r) { 
                            if (solve(goods[r].first, goods[r].second, a) == false) {
                                a[i][j] = '.';
                            }
                        }
                    }
                }
            }
        /*
        for (int i = 0; i < n; ++i) { 
            for (int j = 0; j < m; ++j) { 
                cout << a[i][j];
            }
            cout << endl;
        }*/
        for (int i = 0; i < goods.size(); ++i) { 
            if (solve(goods[i].first, goods[i].second, a) == false) 
                ans = false;
        }
        for (int i = 0; i < bads.size(); ++i) { 
            if (solve(bads[i].first, bads[i].second, a) == true) 
                ans = false;
        }
        if (ans) { 
            cout << "Yes" << endl;
        } else { 
            cout << "No" << endl;
        }
    }
}