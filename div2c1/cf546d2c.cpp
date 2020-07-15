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
    vector<int> a, b; 
    set<pair<vector<int>, vector<int>>> s; 
    int k1, k2; 
    cin >> k1; 
    for (int x,i = 0; i < k1; ++i) { 
        cin >> x; 
        a.push_back(x); 
    }
    cin >> k2;
    for (int x, i = 0; i < k2; ++i) { 
        cin >> x; 
        b.push_back(x);
    }
    ll ans = 0;
    s.insert({a,b});
    bool pos = true;
    while(a.size() > 0 && b.size() > 0) { 
        if (a[0] > b[0]) {
            a.push_back(b[0]);
            a.push_back(a[0]);
        } else { 
            b.push_back(a[0]);
            b.push_back(b[0]);
        }
        a.erase(a.begin());
        b.erase(b.begin());
        if (s.count({a, b}) != 0) { 
            pos = false; 
            break;
        }
        s.insert({a, b});
        ++ans;
    }
    if (pos) { 
        cout << ans << " " << (a.size() == 0 ? 2 : 1);
    } else { 
        cout << -1;
    }
}