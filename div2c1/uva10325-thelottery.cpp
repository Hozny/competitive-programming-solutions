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
    while (b != 0 && a > b) { 
        a %= b; 
        swap(a, b);
    }
    return a;
}
ll lcm (ll a, ll b) { 
    return a / gcd(a,b) * b; 
}
int main() {
    SPEED;
    ll n, m; 
    while (cin >> n) { 
        cin >> m; 
        int a[m]; 
        for (int i = 0; i < m; ++i) cin >> a[i];
        ll end = (1<<m);
        ll rep = 0;
        for (ll i = 1; i < end; ++i) { 
            ll cur = 1, c = 0;
            for (int j = 0; j < m; ++j) { 
                if ((1<<j) & i) { 
                    cur = lcm(a[j], cur);
                    ++c;
                }
                if (cur>n) break;
            }
            if (c&1) rep+=n/cur;
            else rep-=n/cur;
        }
        cout << n - rep << endl;
    }
}
