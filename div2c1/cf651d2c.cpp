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
    int n; 
    cin >> n; 
    map<int, int> mx, my; 
    map<pair<int, int>, int> p;
    ll ans = 0;
    for (int i = 0; i < n; ++i) { 
        int x, y; 
        cin >> x >> y; 
        ans += mx[x] + my[y] - p[{x,y}];
        p[{x,y}]++;
        mx[x]++; my[y]++;
    }
    cout << ans;
}