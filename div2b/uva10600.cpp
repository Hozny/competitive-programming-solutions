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
    vector<int> size, parent; 
    UnionFind(int n) { 
        size = vector<int>(n);       
        parent = vector<int>(n);       
        for (int i = 0; i < n; ++i) { 
            size[i] = 1; 
            parent[i] = i;   
        }
    }
    int find(int x) { 
        while (x != parent[x]) { 
            x = parent[x];
        }
        return x;
    }
    void unite(int a, int b) { 
        a = find(a); b = find(b);
        if (size[b] > size[a]) swap(a, b);
        size[a] += size[b];
        parent[b] = a;
    }
};
int main() {
    SPEED;
    int t; 
    cin >> t; 
    vector<pair<int, int>> answers;
    while (t--) { 
        int n, m; 
        cin >> n >> m; 
        vector<vector<int>> edges; 
        UnionFind uf(n);
        for (int i = 0; i < m; ++i) { 
            int a, b, c; 
            cin >> a >> b >> c; 
            edges.push_back({c, a-1, b-1});
        }
        sort(edges.begin(), edges.end());
        vector<int> used;
        int ans1 = 0;
        for (int i = 0; i < m; ++i) { 
            if (uf.find(edges[i][1]) != uf.find(edges[i][2])) { 
                uf.unite(edges[i][1], edges[i][2]); 
                used.push_back(i); 
                ans1 += edges[i][0];
            }
        }
        int ans2 = INT_MAX;
        
        for (int j = 0; j < used.size(); ++j) { 
            UnionFind nf(n);
            int t = 0;
            int c = 0;
            for (int i = 0; i < m; ++i) { 
                if (i != used[j]) { 
                    if (nf.find(edges[i][1]) != nf.find(edges[i][2])) { 
                        nf.unite(edges[i][1], edges[i][2]); 
                        t += edges[i][0];
                        ++c;
                    }
                }
            }
            if (c == n-1) // this is crucial, i forgot it first time. Take the case where there is one necessary edge, without this the solution is wrong
                ans2 = min(ans2, t);
        }
        cout << ans1 << " " << ans2 << endl;
    }
}