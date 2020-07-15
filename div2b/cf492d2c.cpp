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
// #include <bits/stdc++.h>
#define fileio freopen("input.txt", "r", stdin),freopen("out.txt", "w", stdout)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define ll long long

using namespace std;

int main() {
    SPEED;
    ll n, r, avg; 
    cin >> n >> r >> avg;
    ll a[n];
    vector<vector<ll>> b;
    ll exams = 0;
    for (int i = 0; i < n; ++i) { 
        ll x;
        cin >> a[i] >> x;
        b.push_back({x, i});
        exams += a[i];
    }
    sort(b.begin(), b.end());
    ll ans = 0;
    ll need = max((ll) 0, -1*exams + avg*n);
    for (int i = 0; i < n; ++i) { 
        if ( (r - a[b[i][1]] ) >  0) { 
            ans += min(need, r-a[b[i][1]])*b[i][0];
            need -= min(need, r-a[b[i][1]]);
        }
    }
    cout << ans;

}