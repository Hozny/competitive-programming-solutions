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
int gcd(int a, int b) { 
    if (a < b) swap(a, b);
    while (b!=0 && a > b) { 
        a %= b;
        swap(a, b);
    }
    return a; 
}
ll lcm(int a, int b) { 
    return (ll) a * b / gcd(a, b);
}
int mx = (int) 1e6;
int main() {
    SPEED;
    int a, b; 
    cin >> a >> b;
    ll l = lcm(a, b);
    int d = 0, m = 0;
    d = l / a;
    m = l / b;
    if (a < b) --d;
    if (b < a) --m; 
    if (d == m) { 
        cout << "Equal";
    } else if (d > m) { 
        cout << "Dasha";
    } else { 
        cout << "Masha";
    }
}