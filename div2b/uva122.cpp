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
/* gave up on the question, half the complexity is dealing with poor input structure */ 
int main() {
    SPEED;
    int a[257];
    for (int i = 0; i < 257; ++i) { 
        a[i] = -1;
    }
    
    string s;
    while (cin >> s) { 
        string moves = "";
        string value = "";
        bool fo = false; 
        bool lo = false; 
        bool com = false;
        
        for (int i = 0; i < s.size(); ++i) { 
            char c = s[i];
            if (c == '(') { 
                fo = true;
                continue;
            } 
            if (c == ')') { 
                lo = true;
                continue;
            }
            if (c == ',') { 
                com = true;
                continue;
            }
            if (lo && fo) { 
                fo = false; 
                lo = false;
                int cur = 0;
                for (auto x : moves) { 
                    if (x == 'L') { 
                        cur = cur*2 + 1;
                    } else { 
                        cur = cur*2 + 2;
                    }
                }
                a[cur] = stoi(value);
                value = "";
                moves = "";
            } else if (lo && com) { 
                moves += c; 
            } else if (lo && !com) { 
                value += c;
            }
        }
    }
}