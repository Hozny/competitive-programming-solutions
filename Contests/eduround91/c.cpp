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
    int t; 
    cin >> t; 
    while (t--) { 
        int n, x; 
        cin >> n >> x; 
        int a[n];
        for (int i = 0; i < n; ++i) { 
            cin >> a[i];
        }
        int ans = 0;
        int l = 1;
        sort(a, a+n, greater<int>());
        for (int i = 0; i < n; ++i) { 
            if (a[i] * l >= x) { 
                ++ans;
                l = 1;
            } else { 
                ++l;
            }
        }
        cout << ans << endl;
    }
}