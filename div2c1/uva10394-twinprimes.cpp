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
const int nax = (int) 2e7;
bool primes[nax];
int main() {
    SPEED;
    memset(primes, 1, sizeof(primes));
    for (int i = 2; i < nax; ++i) { 
        for (int j = i*2; j < nax; j+=i) { 
            primes[j] = 0;
        }
    }
    primes[0] = primes[1] = 0;
    vector<pair<int, int>> twins; 
    for (int i = 2; i < nax; ++i) { 
        if (primes[i] == 1 && primes[i-2] == 1) { 
            twins.push_back({i-2, i});
        }
    }
    int n; 
    while (cin >> n) { 
        cout << "(" << twins[n-1].first << ", " << twins[n-1].second << ")\n";
    }
}