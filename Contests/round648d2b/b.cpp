#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> v;   
    int t, n,x; 
    cin >> t; 
    for (int ti = 0; ti < t; ++ti) { 
        cin >> n; 
        int a[n];
        v.clear();
        for (int i = 0; i < n; ++i) {
            cin >> x; 
            a[i] = x;
            v.push_back({x});
        }
        int num1 = 0;
        for (int i = 0; i < n; ++i) { 
            cin >> x; 
            if (x ==1) { 
                ++num1;
            }
            v[i].push_back({x});
        }
        sort(v.begin(), v.end());
        int numdif = 0;
        for (int i = 0; i < n; ++i) { 
            if (a[i] != v[i][0]) 
                ++numdif;
        }
        if (min(num1,n-num1) >= 1 || numdif == 0) {
            cout << "Yes" << endl;
        } else { 
            cout << "No" << endl;
        }
    }
}