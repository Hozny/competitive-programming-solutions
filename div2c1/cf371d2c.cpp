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
#include <bits/stdc++.h>
#define fileio freopen("input.txt", "r", stdin),freopen("out.txt", "w", stdout)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define ll long long

using namespace std;

int main() {
    SPEED;
    string s;
    int h[3], p[3], nd[3] = {0};
    cin >> s; 
    for (int i = 0; i < 3; ++i) cin >> h[i];
    for (int i = 0; i < 3; ++i) cin >> p[i];
    ll m;
    cin >> m;
    for (int i = 0; i < s.size(); ++i) { 
        if (s[i] == 'B') { 
            ++nd[0];
        } else if (s[i] == 'S') { 
            ++nd[1];
        } else { 
            ++nd[2];
        }
    }
    ll l = 0, r = (ll) 9*(1e15);
    ll x;
    ll ans = 0, cost;
    while (l <= r) { 
        x = l + (r - l)/2;
        cost = max((ll) 0, (nd[0]*x-h[0]))*p[0] + max((ll) 0, (nd[1]*x-h[1]))*p[1] + max((ll) 0, (nd[2]*x-h[2]))*p[2];
        if (cost < 0) cost = LLONG_MAX;
        // cout << l << " " << r << " " << x << " " << cost << endl;
        if (cost > m) { 
            r = x - 1;
        } else if (cost < m) { 
            ans = max(ans, x);
            l = x + 1;
        } else { 
            break;
        }
    }
    cout << (cost > m ? ans : x);
    

    

}