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
int a[100000 + 1];
int main() {
    SPEED;
    string s; 
    int m; 
    cin >> s; 
    cin >> m; 
    memset(a, 0, sizeof(a[0])*100001);
    for (int i = 0; i < m; ++i) { 
        int x; 
        cin >> x; 
        a[x] = !a[x];
    }
    int rc = 0;
    for (int i = 0; i*2 <= s.size(); ++i) {
        if (a[i] + rc == 1 ) { 
            swap(s[i-1], s[s.size() - i]);
        }
        if (a[i] == 1) 
            rc = !rc;
    }
    cout << s;

}