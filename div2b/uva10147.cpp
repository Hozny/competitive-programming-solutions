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
    int forests;
    UnionFind(int n) { 
        size = vector<int>(n);
        parent = vector<int>(n);
        forests = n; 
        for (int i = 0; i < n; ++i) { 
            size[i] = 1;
            parent[i] = i;
        }
    }
    int find(int x) { 
        while (x!=parent[x]) { 
            x = parent[x];
        }
        return x;
    }
    void link(int a, int b) { 
        a = find(a);
        b = find(b);
        if (size[a] < size[b]) swap(a,b);
        parent[b] = a;
        // size[a] += size[b];
        if (size[b] == size[a]) ++size[a];
    }
    bool unite(int a, int b) { 
        a = find(a); b = find(b);
        if (a != b) { 
            link(a, b);
            --forests;
        }
        return a!=b;
    }
};
/*There is no need to seperate the the unite and link methods for this question*/ 
int main() {
    SPEED;
    int t; 
    cin >> t; 
    int ot = t;
    while (t--) { 
        int n, x, y; 
        cin >> n; 
        vector<pair<int,int>> cord;
        vector<vector<long double>> edges;
        UnionFind uf(n);
        for (int i = 0; i < n; ++i) { 
            cin >> x >> y; 
            cord.push_back({x, y});
        }
        for (int i = 0; i < n; ++i) { 
            for (int j = i; j < n; ++j) { 
                int dx, dy;
                dx = cord[i].first-cord[j].first;
                dy = cord[i].second-cord[j].second;
                edges.push_back({sqrt(dx*dx + dy*dy), (long double) i, (long double) j});
            }
        }
        sort(edges.begin(), edges.end());
        int k; 
        cin >> k;
        for (int i = 0; i < k; ++i) { 
            int a, b; 
            cin >> a >> b; 
            uf.unite(a-1, b-1);
        }
        vector<pair<int, int>> ans; 
        for (int i = 0; i < edges.size(); ++i) { 
            if (uf.find(edges[i][1]) != uf.find(edges[i][2])) { 
                uf.unite(edges[i][1], edges[i][2]);
                ans.push_back({edges[i][1], edges[i][2]});
            }
        }
        if (ans.size() == 0) { 
            cout << "No new highways need" << endl;
        } else { 
            for (auto temp : ans) { 
                cout << temp.first+1 << " " << temp.second+1 << endl; 
            }
        }
        if (t != 0)
            cout << endl;
    }    
    
}