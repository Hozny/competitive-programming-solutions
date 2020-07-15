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

/* Disjoint set data structure question*/ 
int main() {
    SPEED;
    int t; 
    cin >> t; 
    vector<int> ans;
    while (t--) { 
        int n; 
        cin >> n; 
        map<string, string> parent;
        map<string, int> size;
        string a, b; 
        for (int i = 0; i < n; ++i) { 
            cin >> a >> b; 
            if (parent.count(a) == 0) { 
                parent[a] = a;
                size[a] = 1;
            }
            if (parent.count(b) == 0) {
                parent[b] = b; 
                size[b] = 1;
            } 
            
            while (a != parent[a])   { 
                a = parent[a];
            }
            while (b != parent[b]) { 
                b = parent[b];
            }
            if (a != b) { 
                if (size[a] < size[b]) swap(a, b);
                size[a] += size[b];
                parent[b] = a;
            }
            cout << max(size[a],size[b]) << endl;
        }
    }
}