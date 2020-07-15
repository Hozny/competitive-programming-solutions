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
    int n, x, y; 
    cin >> n;
    map<int, int> p; 
    map<int, int> s;
    ll ans = 0; 
    for (int i = 0; i < n; ++i) { 
        cin >> x >> y; 
            ans += p[x+y];
        p[x+y] += 1;
            ans += s[x-y];
        s[x-y] += 1;
    }
    
    cout << ans << endl;
}
