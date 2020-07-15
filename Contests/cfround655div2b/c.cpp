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
// #include <bits/stdc++.h>
#define fileio freopen("input.txt", "r", stdin),freopen("out.txt", "w", stdout)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define ll long long

using namespace std;

int main() {
    SPEED;
    int t; 
    cin >> t; 
    while (t--) { 
        int n; 
        cin >> n; 
        int a[n];
        for (int i = 0; i < n; ++i) { 
            int x; 
            cin >> x; 
            a[i] = abs(x - (i + 1)); 
        }
        
        ll islands = 0; 
        bool zer = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] != 0 && zer) { 
                zer = false; 
                ++islands;
            }
            if (a[i] == 0)
                zer = true;
        }
        cout << islands << endl;
    }
}