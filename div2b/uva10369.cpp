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
struct UnionFind {
    vector<int> parent;
    vector<int> size; 
    int forests = 0;
    UnionFind(int n) { 
        parent = vector<int>(n);
        size = vector<int>(n);
        forests = n; 
        for (int i = 0; i < n; ++i) { 
            parent[i] = i; 
            size[i] = 1; 
        }
    }
    int find(int a) { 
        while (a != parent[a]) { 
            a = parent[a];
        }
        return a; 
    }
    bool unite(int a, int b) { 
        a = find(a); b = find(b);
        if (a == b)
            return false;
        if (size[b] > size[a])
            swap(a, b);
        size[a] += size[b];
        parent[b] = a;
        --forests;
        return true;
    }
};

int main() {
    SPEED;
    int t; 
    cin >> t; 
    while (t--) { 
        int s, p; 
        cin >> s >> p; 
        vector<pair<int, int>> posts; 
        for (int i = 0; i < p; ++i) { 
            int x, y; 
            cin >> x >> y; 
            posts.push_back({x, y});
        }
        vector<vector<long double>> edges; 
        UnionFind uf(p); 
        for (int i = 0; i < posts.size(); ++i) { 
            for (int j = i+1; j < posts.size(); ++j) { 
                int dx = posts[i].first - posts[j].first; 
                int dy = posts[i].second - posts[j].second; 
                edges.push_back({sqrt(dx*dx + dy*dy), (long double) i, (long double) j});
            }
        }
        sort(edges.begin(), edges.end());
        long double ans = 0;;

        for (int i = 0; i < edges.size(); ++i) { 
            if (uf.forests <= s) { 
                break;
            }
            if (uf.unite((int)edges[i][1], (int)edges[i][2])) { 
                ans = max(edges[i][0], ans);
            }
        }
        cout << fixed << setprecision(2) << ans << endl;
    }
}