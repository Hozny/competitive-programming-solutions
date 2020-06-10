#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x; 
    map<int, int> m; 
    cin >> n;
    for(int i = 0; i < n; ++i) { 
        cin >> x; 
        m[x] += 1;
    } 
    if (m.size() <= 3) { 
        vector<int> t; 
        for (auto j : m) { 
            t.push_back(j.first);
        }
        sort(t.begin(), t.end());
        if (t.size() == 3) { 
            if (t[2] - t[1] != t[1] - t[0]) { 
                cout << "NO";
            } else { 
                cout << "YES";
            }
        } else { 
            cout << "YES";
        }
    } else {
        cout << "NO";
    }
}