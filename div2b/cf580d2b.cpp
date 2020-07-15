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
    int n, d; 
    cin >> n >> d; 
    map<int, ll> m; 
    for (int i = 0; i < n; ++i) { 
        int x, y; 
        cin >> x >> y;
        m[x] += y; 
    }
    vector<pair<int, ll>> v;
    for (auto x : m) { 
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int min = 0; 
    ll ans = INT_MIN;
    ll curans = 0;
    for (int i = 0; i < v.size(); ++i) { 
        if (i == 0 || v[min].first + d > v[i].first) { 
            curans+=v[i].second;
        } else { 
            curans += v[i].second;
            for (int j = min; j <= i; ++j) { 
                if (j == i) { 
                    min = j; 
                    break;
                } else if (v[j].first + d > v[i].first) { 
                    min = j;
                    break;
                }
                curans -= v[j].second;
            }
        }
        ans = max(ans, curans);
    }
    cout << ans;
}