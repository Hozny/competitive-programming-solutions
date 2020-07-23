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

int pos(int a) { 
    return log2(a & -a);
}
int f(int x) { 
    return pow(2, pos(x));
}
int main() {
    SPEED;
    int s, l; 
    cin >> s >> l;
    vector<int> ans; 
    for (int i = l; i >= 1; --i) { 
        if (f(i) <= s) { 
            s-= f(i);
            ans.push_back(i);
        } 
        if (s == 0) break;
    }
    if (s == 0){ cout << ans.size() << endl; for (auto x : ans) cout << x << " ";}
    else cout << -1;
}