#include <bits/stdc++.h>
 
using namespace std; 
 
int main() { 
    int n, m; 
    cin >> n >> m; 
    vector<int> dd;
    bool found = false;
    int dist = 0;
    char c;
    map<int,int> mp;
    bool found2;
    for (int i = 0; i < n; ++i) { 
        found = false;
        found2 = false;
        dist = 0;
        for (int j = 0; j < m; ++j) {
            cin >> c; 
            if (c == 'G') { 
                found = true;
            } else if (c == 'S' && found) { 
                found2 = true;
            } else if (c == '*' && found && !found2) { 
                ++dist;
            }
        }
        if (!(found && found2)) { 
            dist = -1;
        }
        mp[dist] = 1;
    }
    int ans = 0;
    for (auto x : mp) { 
        if (x.first == -1) { 
            ans = -1;
            break;
        } else{ 
            ans += 1;
        }
    }
    cout << ans;
}
