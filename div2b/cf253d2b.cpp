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
#define fileio freopen("input.txt", "r", stdin),freopen("output.txt", "w", stdout)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define ll long long

using namespace std;

int main() {
    fileio;
    SPEED;
    int n; 
    cin >> n; 
    int a[n];
    for (int i = 0; i < n; ++i) 
        cin >> a[i];
    int ans = INT_MAX;
    sort(a, a+n);
    for (int i = 0; i < n; ++i) { 
        int x = upper_bound(a, a+n, a[i]*2)-a;
        // x is index of element we gotta remove
        // n - x + i  (n-x) how many elements to remove from right, i is how many elements from left
        ans = min(ans, n - x + i);
    }
    cout << ans;
}