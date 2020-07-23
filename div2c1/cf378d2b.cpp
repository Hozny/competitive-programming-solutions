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
    int n; 
    cin >> n; 
    vector<pair<int, int>> ap, bp, t;
    for (int i = 0; i < n; ++i) { 
        int a, b; 
        cin >> a >> b; 
        int c = (i+1);
        ap.push_back({a, c});
        bp.push_back({b, -1*c});
        t.push_back({a, c});
        t.push_back({b, -1*c});
    }     
    string f = "", s = "";
    for (int i = 0; i < n; ++i) f+='0', s+='0';
    sort(t.begin(), t.end());
    for (int k = n/2; k*2 <= n; ++k) { 
        set<int> vis;
        for (int i = 0; i < k; ++i) { 
            vis.insert(ap[0].second);
            vis.insert(bp[0].second);
            f[i] = '1'; s[i] = '1';
        }
        int c = 0;
        for (int i = 0; i < n; ++i) { 
                if (t[i].second > 0) { 
                    f[t[i].second-1] = '1';
                } else { 
                    s[abs(t[i].second)-1] = '1';
                }
        }
    }
    cout << f << endl << s;
}