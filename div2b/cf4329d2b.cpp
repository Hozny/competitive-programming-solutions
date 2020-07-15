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
    vector<int> a, b; 
    ll suma = 0; ll sumb = 0; 
    bool lasta = false;
    for (int i = 0; i < n; ++i) { 
        int x; 
        cin >> x; 
        if (x < 0) { 
            sumb += abs(x);
            b.push_back(abs(x));
            lasta = false;
        } else { 
            suma += abs(x);
            a.push_back(abs(x));
            lasta = true;
        }
    }
    if (suma > sumb) { 
        cout << "first"; 
    } else if (sumb > suma) { 
        cout << "second";
    } else { 
        bool abig = false; bool bbig = false; 
        for (int i = 0; i < min(a.size(), b.size()); ++i) { 
            if (a[i] > b[i]) { abig = true; break; } 
            if (b[i] > a[i]) { bbig = true; break; }
        }
        if (abig) { 
            cout << "first";
        } else if (bbig) { 
            cout << "second";
        } else { 
            if (a.size() > b.size()) { 
                cout << "first";
            } else if (b.size() > a.size()) { 
                cout << "second";
            } else { 
                if (lasta) { 
                    cout << "first";
                } else { 
                    cout << "second";
                }
            }
        }
    }
}