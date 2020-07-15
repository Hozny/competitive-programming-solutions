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
    int aa = -1; 
    int bb = -1; 
    int cc = -1; 
    bool flag = true;
    if (n <= 2) { 
        for (int a = 1; a <= 100; ++a)  { 
            for (int b = 1; b <= 100; ++b) { 
                for (int c = 1; c <= 100; ++c) { 
                    if (pow(a, n) + pow(b, n) == pow(c, n) && a != b && a != c && b != c) { 
                        aa = a; bb = b; cc = c;
                        flag = false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(!flag) break;
        }
    }
    if (aa > 0) { 
        cout << aa << " " << bb << " " << cc;
    } else { 
        cout << aa;
    }
}