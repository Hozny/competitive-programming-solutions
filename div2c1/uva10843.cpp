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
const ll mod = 2000000011;
ll exp(ll a, ll b) { 
    ll r = 1;
    while(b) { 
        if (b&1) r= (r*a)%mod;
        a = (a*a)%mod;
        b/=2;
    }
    return r;
}
int main() {
    SPEED;
    int t;
    cin >> t; 
    int c = 0; 
    while (t--) { 
        ++c;
        ll n; 
        cin >> n; 
        cout << "Case #" << c << ": ";
        if (n == 1 || n == 2) cout << 1 << endl;
        else cout << exp(n, n-2) << endl;
    }
    
}