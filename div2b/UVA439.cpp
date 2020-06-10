#include <bits/stdc++.h>

using namespace std;

int main() {
    char a1, b1;
    int y1, y2;
    char in; 
    while (cin >> a1 >> y1 >> b1 >> y2) { 
        int x1 = a1 - 'a' + 1; 
        int x2 = b1 - 'a' + 1;
        queue<vector<int>> qu;
        qu.push({x1, y1, 0});
        int dist = 0;
        while (qu.size() > 0) { 
            int tx = qu.front()[0];
            int ty = qu.front()[1];
            int cur = qu.front()[2];
            qu.pop();

            if (tx == x2 && ty == y2) {
                dist = cur; 
                break;
            }
            if (tx <= 6) { 
                if (ty <= 7) { 
                    qu.push({tx+2, ty+1,cur+1});
                } 
                if (ty >= 2) { 
                    qu.push({tx+2, ty-1, cur+1});
                }
            }
            if (tx >= 3) { 
                if (ty <= 7) { 
                    qu.push({tx-2, ty+1, cur+1});
                }
                if (ty >= 2) { 
                    qu.push({tx-2, ty-1, cur+1});
                }
            }
            if (ty <= 6) { 
                if (tx<=7) { 
                    qu.push({tx+1, ty+2, cur+1});
                }
                if (tx >= 2) { 
                    qu.push({tx-1, ty+2, cur+1});
                }
            }
            if(ty >= 3) { 
                if (tx >= 2) { 
                    qu.push({tx-1, ty-2, cur+1});
                }
                if (tx <= 7) { 
                    qu.push({tx+1, ty-2, cur+1});
                }
            }
        }
        cout << "To get from " << a1 << y1 << " to " << b1 << y2 << " takes " << dist <<" knight moves." << endl;
    }

}