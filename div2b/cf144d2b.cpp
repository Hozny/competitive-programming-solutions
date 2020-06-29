#include <bits/stdc++.h>

using namespace std;

int main() {
    int xa, ya, xb, yb; 
    cin >> xa >> ya >> xb >> yb;
    if (xa > xb)
        swap(xa, xb);
    if (ya > yb)
        swap(ya, yb);
    int n; 
    vector<vector<int>> v;
    int x, y, r;
    cin >> n; 
    for (int i = 0; i < n; ++i) { 
        cin >> x >> y >> r; 
        v.push_back({x, y, r});
    }
    long long ans = 0;
    bool found;
    bool found2;
    for (int i = xa; i <= xb; ++i) { 
        found = false;
        found2 = false;
        for (int j = 0; j < v.size(); ++j) { 
            // i,ya or i, yb
            long long dx = (i-v[j][0])*(i-v[j][0]);
            if ( dx + (ya-v[j][1])*(ya-v[j][1]) <= v[j][2]*v[j][2]) { 
                found = true;
            }
            if ( dx + (yb-v[j][1])*(yb-v[j][1]) <= v[j][2]*v[j][2]) { 
                found2 = true;
            }
        }
        if (!found) { 
            ++ans;
        }
        if (!found2) { 
            ++ans;
        }
        
    }
    for (int i = ya+1; i < yb; ++i) { 
        found = false;
        found2 = false;
        for (int j = 0; j < v.size(); ++j) { 
            long long dy = (i-v[j][1])*(i-v[j][1]);
            if ( dy + (xa-v[j][0])*(xa-v[j][0]) <= v[j][2]*v[j][2]) { 
                found = true;
            }
            if ( dy + (xb-v[j][0])*(xb-v[j][0]) <= v[j][2]*v[j][2]) { 
                found2 = true;
            }
        }
        if (!found) { 
            ++ans;
        }
        if (!found2) { 
            ++ans;
        }
    }
    cout << ans;
}