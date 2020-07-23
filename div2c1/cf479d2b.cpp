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
    int n, k; 
    cin >> n >> k; 
    vector<pair<int, int>> v; 
    for (int i = 0; i < n; ++i) { 
        int x; 
        cin >> x; 
        v.push_back({x, i});
    }
    int c = 0; 
    vector<pair<int, int>> ans;
    for (int i = 0; i < k; ++i) { 
        sort(v.rbegin(), v.rend());
        if (v[0].first - v[n-1].first <= 1) 
            break;
        v[0].first--;
        v[n-1].first++;
        ans.push_back({v[0].second+1, v[n-1].second+1});
        ++c; 
    }
        sort(v.rbegin(), v.rend());
    cout << v[0].first - v[n-1].first << " " << c << endl;
    for (auto x : ans) { 
        cout << x.first << " " << x.second << endl;
    }
}