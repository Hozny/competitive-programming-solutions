#include <bits/stdc++.h>

using namespace std;
/// 3 min thinkign
int main() {
    int n, t; 
    cin >> n; 
    map<int, int> last; 
    map<int, set<int>> m;
    last[1e5 + 1] = {0};
    for (int i = 0; i <= 1e5; ++i)
        last[i] = -1;
    for (int i = 0; i < n; ++i) { 
        cin >> t; 
        if (last[t] == -1)
            last[t] = i;
        m[t].insert(i - last[t]);
        last[t] = i;
    }
    vector<pair<int, int>> ans; 
    int num = 0;
    for (auto x: m) { 
        if (x.second.size() == 2) { 
            int temp = 0;
            for (auto r : x.second) { 
                temp = r;
            }
            ans.push_back({x.first, temp});
        } else if (x.second.size() == 1) { 
            ans.push_back({x.first, 0});
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto x: ans) { 
        cout << x.first << " " << x.second << endl;
    }
}