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
const int mod = 1e9 + 7; 
ll gcd(ll a, ll b) { 
    if (a < b) swap(a, b);
    while (b != 0 && a > b) { 
        a %= b; 
        a %= mod; b %= mod;
        swap(a, b);
    }
    return a; 
}
ll exp(ll a, ll b) { 
    ll r = 1;
    while (b) { 
        if (b&1)
            r = r*a%mod;
        a = a*a%mod;
        b /= 2; 
    }
    return r;
}
int main() {
    SPEED;
    int t; 
    cin >> t; 
    while (t--) { 
        ll a, b, n; 
        cin >> a >> b >> n; 
        ll dif = abs(a - b);
        ll g = gcd(exp(a,n) + exp(b, n), dif);
        cout << g<< endl;
    }
}