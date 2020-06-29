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
    cin >> n; 
    ll mod = 1e9+7;
    ll l = 27;
    ll r = 7; 
    for (int i = 1; i < n; ++i) { 
        l = (l*27)%mod;
        r = (r*7)%mod;
    }
    l+=1e9+7;
    cout << (l - r)%mod;
}