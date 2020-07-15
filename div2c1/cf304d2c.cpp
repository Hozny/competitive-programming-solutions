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
    int n; 
    cin >> n; 
    vector<int> a, b, c; 
    set<int> s;
    for (int i = 0; i < n; ++i) { 
        a.push_back(i);
        b.push_back((i+1) % n);
        c.push_back((a[i] + b[i]) % n);
        s.insert(c[i]);
    }    
    if (s.size() >= n) { 
        for (int i = 0; i < n; ++i) { 
            cout << a[i] << " ";
        } cout << endl;
        for (int i = 0; i < n; ++i) { 
            cout << b[i] << " ";
        } cout << endl;
        for (int i = 0; i < n; ++i) { 
            cout << c[i] << " ";
        } cout << endl;
    } else { 
        cout << -1;
    }
}