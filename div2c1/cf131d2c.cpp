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
ll gcd(ll a, ll b) { 
    if (a < b) swap(a, b);
    while (b!=0 && a > b) { 
        a %= b; 
        swap(a, b);
    }
    return a;
}
ll chs(ll a, ll b) { 
    ll div = 1; 
    for (int i = 1; i <= min(a-b, b); ++i) { 
        div *= i;
    }
    ll r = 1;
    for (int i = max(b, a-b)+1; i <= a; ++i) { 
        r*=i;
        ll cur = gcd(r, div);
        r/=cur; div/=cur;
    }
    
    return r;
}
int main() {
    SPEED;
    int n, m, t;
    cin >> n >> m >> t;
    ll ans = 0; 
    for (int i = 4; i <= n; ++i) { 
        if (t-i>= 1 && t-i <= m)
            ans += chs(n, i) * chs(m, t-i);
    }
    cout << ans;
}