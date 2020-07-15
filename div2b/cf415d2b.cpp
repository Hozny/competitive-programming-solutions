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
    int n;
    ll a, b; 
    cin >> n >> a >> b; 
    ll w[n];
    for (int i = 0; i < n; ++i) { 
        cin >> w[i];
        w[i] = (w[i] * a % b) / a;
    }
    for (int i = 0; i < n; ++i) { 
        cout << w[i] << " ";
    }
}