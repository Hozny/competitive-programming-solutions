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
    int n, d, m; 
    cin >> n >> d >> m; 
    int ans = 0;
    for (int i = 0; i < m; ++i) { 
        int cx, cy;
        cin >> cx >> cy; 
        string ans = "NO";
        if (cx >= 0 && cx <= n && cy >= 0 && cy <= n) { 
            if (cx - d <= cy && cy <= cx + d && cy >= -cx + d && cy <= -cx + 2*n -d) { 
                ans = "YES";
            }
        }
        cout << ans << endl;
    }
}