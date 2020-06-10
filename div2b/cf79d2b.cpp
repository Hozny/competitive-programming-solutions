#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k, t, x, y;
    cin >> n >> m >> k >> t; 
    vector<pair<int, int>> w; 
    for (int i = 0; i < k; ++i) { 
        cin >> x >> y;
        w.push_back(make_pair((x-1)*m + y-1, 0));
    }
    sort(w.begin(), w.end());
    for (int i = 0; i < w.size(); ++i) { 
        w[i].second = i+1;
    }

    string f[3] = {"Carrots", "Kiwis", "Grapes"};
    int count;
    for (int i = 0; i < t; ++i) { 
        cin >> x >> y; 
        count = 0; 
        for (int j = 0; j < w.size(); ++j) { 
            if (w[j].first < (x-1)*m + y-1) {
                count = w[j].second;
            } else if (w[j].first == (x-1)*m + y -1) {
                count = -1;
                break;
            } else { 
                break;
            }
        }
        if (count == -1) { 
            cout << "Waste" << endl;
        } else { 
            cout << f[((x-1)*m + y - count - 1) % 3] << endl;
        }
    }
}