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
    string in; 
    cin >> in; 
    bool p = true;
    for (int i = 0; i < in.size()/2; ++i) { 
        if (in[i] != in[in.size() - i-1]) { 
            p = false;
        }
    }    
    if (p) { 
        cout << "First";
    } else { 
        if (in.size() % 2 != 0) { 
            cout << "Second";
        } else { 
            cout << "First";
        }
    }
}