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
const int nax = 100000;
int primes[nax];
int main() {
    SPEED;
    for (int i = 0; i < nax; ++i) 
        primes[i] = 1;
    primes[0] = 0; 
    for (int i = 2; i < nax; ++i) { 
        for (int j = i*2; j  < nax; j += i) { 
            primes[j] = 0;
        }
    }
    vector<int> pr;
    for (int i = 2; i < nax; ++i) { 
        if (primes[i]) { 
            pr.push_back(i);
        }
    }    
    int t; 
    cin >> t; 
    while (t--) { 
        int n; 
        cin >> n; 
        vector<int> div; 
        int ans = n - 1;
        for (int i = 2; i*i <= n; ++i) { 
            if (n % i == 0) { 
                div.push_back(i); 
                div.push_back(n / i); 
            }
        }
        for (int i = 0; i < div.size(); ++i) { 
            if (n % div[i] == 0) { 
                int mn = n - div[i];
                if (max(mn, div[i]) < ans) { 
                    if (mn % div[i] == 0 || div[i] % mn == 0) { 
                        ans = max(mn, div[i]);
                    }
                }
            }
        }
        cout << n - ans << " " << ans << endl;
    }
}