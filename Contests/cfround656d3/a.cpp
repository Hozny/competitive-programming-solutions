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
        int n[3] = {0};
        int a, b, c; 
        // cin >> n[0] >> n[1] >> n[2];
        cin >> a >> b >> c; 
        if (a == c && b < c && a > 1) { 
            cout << "YES" << endl;
            cout << a << " " << b << " " << 1 << endl;
        } else if (a == b && b > c && a > 1) { 
            cout << "YES" << endl; 
            cout << b << " " << c << " " << 1 << endl;
        } else if (b == c && a <= b && b > 1) { 
            cout << "YES" << endl;
            cout << b << " " << a << " " << 1 << endl;
        } else if (a == b && b == c) { 
            cout << "YES" << endl;
            cout << a << " " << a << " " << a << endl;
        } else { 
            // cout << a << " " << b << " " << c << " ";
            cout << "NO" << endl;
        }

    }
}