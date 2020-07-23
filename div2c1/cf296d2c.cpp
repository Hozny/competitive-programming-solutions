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
const int mn = 1e5 + 1;
int l[mn], r[mn], d[mn];

ll a[mn];
ll inc[mn+1] = {0};
ll add[mn] = {0};
int main() {
    SPEED;
    int n, m, k; 
    cin >> n >> m >> k; 
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) { 
        cin >> l[i] >> r[i] >> d[i];
    }
    for (int i = 0; i < k; ++i) { 
        int l, r; 
        cin >> l >> r;
        inc[l-1]++;
        inc[r]--;
    }
    int c = 0;
    for (int i = 0; i < m; ++i) { 
        c += inc[i];
        add[l[i]-1] += (ll) d[i] * c;
        add[r[i]] -= (ll) d[i] * c;
    }
    ll dd = 0;
    for (int i = 0; i < n; ++i) { 
        dd+=add[i];
        cout << (ll) a[i] + dd << " ";
    }
}