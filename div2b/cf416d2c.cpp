#include <iostream>
#include <climits>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
// #include <bits/stdc++.h>
#define fileio freopen("input.txt", "r", stdin),freopen("out.txt", "w", stdout)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define ll long long

using namespace std;

int main() {
    SPEED;
    int n; 
    cin >> n;
    vector<vector<int>> v; 
    for (int i = 0; i < n; ++i) { 
        int c, p;
        cin >> c >> p;
        v.push_back({p, c, i});
    }
    int k; 
    cin >> k;
    vector<vector<int>> s; 
    for(int i = 0; i < k; ++i) { 
        int x; 
        cin >> x; 
        s.push_back({x, i});
    }
    sort(s.rbegin(), s.rend());
    sort(v.begin(), v.end(), [](vector<int> &left, vector<int> &right) { 
        if (left[0] == right[0]) { 
            if (left[1] == right[1]) { 
                return (left[2] < right[2]);
            } else { 
                return (left[1] > right[1]);
            }
        } 
        return (left[0] > right[0]);
        
    });
    vector<vector<int>> ans;
    int begin = 0;
    ll tot = 0;
    for (int i = 0; i < s.size(); ++i) { 
        for (int j = begin; j < v.size(); ++j) { 
            if (v[j][0] <= s[i][0]) {
                ans.push_back({s[i][1], v[j][2], v[j][0]});
                ++begin;
                tot += v[j][1];
                break;
            }
        }
    } 
    sort(ans.begin(), ans.end());
    cout << ans.size() << " " << tot << endl;
    for (auto t : ans) { 
        cout << t[2] << " " << t[0] << endl;
    }
}