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
    int t; 
    cin >> t; 
    while(t--) { 
        int n, m; 
        cin >> n >> m;
        if (n < m) swap(n, m);
        int ans = -1;
        set<int> s;
        for (int x, i = 0; i < n; ++i) {cin >> x; s.insert(x);}
        for (int x, i = 0; i < m; ++i) { 
            cin >> x;
            if (s.count(x) != 0) ans = x;
        }
        if (ans == -1) cout << "NO" << endl;
        else cout << "YES" << endl << 1 << " " << ans << endl;
    }
}