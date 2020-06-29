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
    string a, b; 
    cin >> a >> b; 
    map<char, int> ac, bc;
    for (int i = 0; i < (int)a.size(); ++i) { 
        ac[a[i]]+=1;
    }
    for (int i = 0; i < (int) b.size(); ++i) { 
        bc[b[i]]+=1;
    }
    bool aut = false;
    int l = 0;
    for (int i = 0; i < (int) a.size(); ++i) { 
        if (a[i] == b[l])
            ++l;
        if (l == (int)b.size()) { 
            aut = true;
            break;
        }
    }
    bool arr = false;
    if (bc.size() == ac.size()) { 
        arr = true;
        for (int i = 0; i < (int) a.size(); ++i) { 
            if (ac[a[i]] != bc[a[i]]) { 
                arr = false;
            }
        }
    }

    bool p = 1;
    for (int i = 0; i < (int) b.size(); ++i) { 
        if (ac.count(b[i]) == 0 || ac[b[i]] == 0)
            p = 0;
        else  
            ac[b[i]] -= 1;
    }
    if (arr) { 
        cout << "array";
    } else if (aut) { 
        cout << "automaton";
    } else if (p) { 
        cout << "both";
    } else { 
        cout << "need tree";
    }
    
}