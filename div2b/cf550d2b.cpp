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
vector<string> v;
void combos(int i, string cur) { 
    if (i == 0) {
        v.push_back(cur);
    } else { 
        combos(i-1, cur+'0');
        combos(i-1, cur+'1');
    }
}

int main() {
    SPEED;
    int n, l, r, x; 
    cin >> n >> l >> r >> x; 
    int a[n];
    for(int i = 0; i < n; ++i) { 
        cin >> a[i];
    }
    ll ans = 0;
    combos(n, "");
    for (int i = 0; i < v.size(); ++i) { 
        vector<int> temp; 
        ll sum = 0;
        int m = INT_MAX;
        int b = INT_MIN;
        for(int j = 0; j < v[i].size(); ++j) { 
            if (v[i][j] == '1')  { 
                m = min(a[j], m);
                b = max(a[j], b);
                sum += a[j];
            }
        }
        if (b-m>=x && sum <= r && sum >= l) { 
                ++ans;
        }
    }
        
    cout << ans;
}