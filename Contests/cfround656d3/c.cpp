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
vector<int> a;
int n; 
bool check(int c) { 
    int l = c, r = n-1;
    int cur = min(a[c], a[r]);
    while (l < r) { 
        if (a[l] < a[r]) { 
            if (a[l] >= cur) { 
                cur = a[l];
                l = l + 1;
            } else { 
                return false;
            }
        } else { 
            if (a[r] >= cur) { 
                cur = a[r];
                r = r - 1;
            } else { 
                return false;
            }
        }
    }
    return true;
}

int main() {
    SPEED;
    int t; 
    cin >> t; 
    while (t--) { 
        cin >> n; 
        a = vector<int>(n);
        for(int i =0 ; i < n; ++i) { 
            cin >> a[i];
        }
        int ans = 0;
        bool inc = true;
        for (int i = n-2; i >= 0; --i) { 
            if (inc && a[i] < a[i+1]) { 
                inc = false;
            } else if (!inc) { 
                if (a[i] > a[i+1]) { 
                    ans = i+1;
                    break;
                }
            }
            
        }
        cout <<  ans << endl;
    }
}