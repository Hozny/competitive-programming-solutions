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
ll gcd(ll a, ll b) { 
    if (a < b) swap(a, b);
    while (b!=0 && a > b) { 
        a %= b; 
        swap(a, b);
    }
    return a;
}
ll lcm (ll a, ll b) { 
    return (a / gcd(a, b) * b);
}

int main() {
    SPEED;
    vector<pair<ll, ll>> ans; 
    while(1) { 
        int n, t; 
        cin >> n >> t; 
        if (n == 0 && t ==0) break;
        int a[n], b[t];
        for (int i = 0; i < n; ++i) { 
            cin >> a[i];
        }
        for (int i = 0; i < t; ++i) cin >> b[i];
        for (int i = 0; i < t; ++i) { 
            ll ans1 = LLONG_MIN;
            ll ans2 = LLONG_MAX;
            for (int c1 = 0; c1 < n; ++c1) { 
                for (int c2 = 0; c2 < n; ++c2) { 
                    for (int c3 = 0; c3 < n; ++c3) { 
                        for (int c4 = 0; c4 < n; ++c4) { 
                            if (c1 != c2 && c2 != c3 && c3 != c4 && c1 != c3 && c1 != c4 && c2 != c4) { 
                                ll tlcm = lcm(a[c1], lcm(a[c2], lcm(a[c3], a[c4])));
                                ans1 = max(ans1, b[i] / tlcm * tlcm);
                                ans2 = min(ans2, (b[i] + tlcm - 1) / tlcm * tlcm);
                            }
                        }
                    }
                }
            }
            ans.push_back({ans1,  ans2});
            // cout << ans1 << " " << ans2 << endl;
        }
    } 
    cout << "ANSWER__________________________:" << endl;
    for (auto x : ans) { 
        cout << x.first << " " << x.second << endl;
    }
}