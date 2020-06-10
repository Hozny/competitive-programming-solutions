#include <bits/stdc++.h>

using namespace std;

int main() {
    long double t1, t2, k; 
    int n; 
    cin >> n >> t1 >> t2 >> k; 
    long double s1, s2; 
    vector<pair<double, int>> f; 
    for (int ti = 0; ti < n; ++ti) { 
        cin >> s1 >> s2; 
        f.push_back({max( (t1*s1)*(100-k)/100 + s2*t2, (t1*s2)*(100-k)/100 + s1*t2), ti+1});
    }
    sort(f.begin(), f.end(), [](auto &left, auto &right) {
        if (left.first == right.first) { 
            return (left.second < right.second); 
        } else { 
            return left.first > right.first;
        }
    }); 
    for (int i = 0; i < n; ++i) { 
        printf("%d %.2lf\n", f[i].second, f[i].first);
    }
}