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
    ll n; 
    ll x; 
    cin >> n; 
    x = n; 
    ll ans = 1;
    for (ll i = 2; i * i <= n; ++i) { 
        if (x % i == 0) { 
            ans *= i;
            while (x % i == 0) { 
                x/=i;
            } 
        }
    } 
    if (x > 1) ans *= x;
    cout << ans;
}