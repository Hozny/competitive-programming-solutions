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
    int t; 
    cin >> t; 
    while (t--) { 
        int s, d; 
        cin >> s >> d; 
        int a = (s + d)/2;
        int b = s - a;
        if (a + b == s && a >= 0 && b >= 0 && a - b == d) cout << max(a, b) << " " << min(a, b) << endl;
        else cout << "impossible" << endl;
    }
}