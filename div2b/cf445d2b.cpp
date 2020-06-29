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

vector<vector<int>> a; 
set<int> vis; 
ll ans = 1;
void dfs(int cur, int dep) { 
    vis.insert(cur);
    for (int i = 0; i < a[cur].size(); ++i) { 
        if (vis.count(a[cur][i]) == 0) { 
            dfs(a[cur][i], dep+1);
            ans*=2;
        }
    }
}
int main() {
    SPEED;
    int n, m; 
    cin >> n >> m;
    vector<int> t = {};
    for (int i = 0; i <= n; ++i) { 
        a.push_back(t);
    }
    int x, y;
    for (int i = 0; i < m; ++i) { 
        cin >> x >> y; 
        a[x].push_back(y);
        a[y].push_back(x);
    }
        for (int i = 1; i <= n; ++i)  { 
            dfs(i, 1);
        }
        
    cout << ans;
}