#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t; 
    int n, k;
    while (t--) { 
        vector<int> pos; 
        pos.clear();
        char c;
        cin >> n >> k;
        for (int i = 0; i < n; ++i) { 
            cin >> c;
            if (c == '1') { 
                pos.push_back(i+1);
            }
        }
        int ans = 0;
        if (pos.size() == 0) { 
            ++ans;
            pos.push_back(1);
        }
        for (int i = 0; i < pos.size(); ++i) { 
            int dist;
            if (i == 0) {
                dist = pos[i]-1;
            } else { 
                dist = pos[i] - pos[i-1] - 1;
                dist -= k;
                dist = max(0, dist);
            }
            ans += (dist / (k+1));
            if (i == pos.size()-1) { 
                dist = n - pos[i];
                ans += (dist/(k+1));
            }
        }
        
        cout << ans << endl;
    }
}