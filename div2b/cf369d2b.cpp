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
    int n, k, l, r, sall, sk; 
    cin >> n >> k >> l >> r >> sall >> sk;
    int a[n]; 
    for (int i = 0; i < n; ++i) 
        a[i] = l; 
    for (int i = 0; i < k; ++i) { 
        a[i] = (sk / k);
        if (i < sk - (sk / k)*k) { 
            ++a[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) { 
        sum += a[i];
    }
    for (int i = k; i < n; ++i) { 
        a[i] = (sall - sk)/ (n-k);
        if (i < k +(sall-sk) - (sall-sk)/(n-k) *(n-k) )
            ++a[i];
    }
    for (int i = 0; i < n; ++i) { 
        cout << a[i] << " ";
    }
}