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
const int nax = (int) 1e7 + 1;
bool primes[nax] = {0};
int main() {
    SPEED;
    int n; 
    memset(primes, 1, sizeof(primes));
    for (int i = 2; i < nax; ++i) { 
        for (int j = i+i; j < nax; j+=i) { 
            primes[j] = 0;
        }
    } 
    primes[0] = primes[1] = 0;
    while(cin >> n) { 
        if (n < 8) { 
            cout << "Impossible."<<endl;
        } else {
            int t; 
            if (n%2!=0) { 
                cout << 3 << " " << 2 << " ";
                t = n - 5;
            } else {
                cout << 2 << " " << 2 << " ";
                t = n - 4;
            }
            for (int i = 2; i <= t; ++i) { 
                if (primes[i] && primes[t-i]) { 
                    cout << i << " " << t-i;
                    break;
                }
            }
            cout << endl;
        }
    }
}