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
    while (t--) { 
        int n; 
        cin >> n; 
        vector<int> ans; 
        int cur = -1;
        set<int> vis;
        for (int x,i = 0; i < 2*n; ++i) { 
            cin >> x;
            if (vis.count(x) == 0) { 
                ans.push_back(x);
                vis.insert(x);
            }
        }
        for (auto x : ans) { 
            cout << x << " ";
        } cout << endl;
    }
}