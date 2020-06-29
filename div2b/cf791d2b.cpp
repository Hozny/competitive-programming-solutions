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
const int nax = 150001;
int vis[nax] = {0};
vector<vector<int>> v(nax);
int dfs(int cur){ 
    vis[cur] = 1;
    int ans = 1;
    for (int i = 0; i < v[cur].size(); ++i) { 
        if (!vis[v[cur][i]]) { 
            ans += dfs(v[cur][i]);
        }
    }
    return ans;
}
int main() {
    SPEED;
    int n; 
    ll m;
    cin >> n >> m; 
    int x, y;
    set<int> s;
    for (int i = 0; i < m; ++i) { 
        cin >> x >> y; 
        v[x].push_back(y);
        v[y].push_back(x);
        s.insert(x); s.insert(y);
    }

    n = s.size()-1;
    long long total = 0;
    for (auto x : s) { 
        long long t = dfs(x);
        total += (t)*(t-1)/2;
    }
    if (total == m)
        cout << "YES";
    else 
        cout << "NO";
}