#include <iostream>
#include<climits>
#include<iomanip>
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

using namespace std; 

using namespace std;

int main() {
    int n; 
    cin >> n; 
    int x[n], y[n];
    for (int i = 0; i < n; ++i) { 
        cin >> x[i] >> y[i];
    }
    int ans = 0; 
    for (int i = 0; i < n; ++i) { 
        map<long double, int> m;
        for (int j = 0; j < n; ++j) { 
            if (i != j) { 
                if (x[i] != x[j]) { 
                    m[ ((long double) y[i]-y[j])/(x[i]-x[j]) ] += 1;
                    // cout << ((long double) y[i]-y[j])/(x[i]-x[j]) << endl;
                } else { 
                    m[INT_MAX] += 1;
                }
            }
        }
        for (auto t : m) { 
            if (t.second > ans) { 
                ans = t.second;
            }
        }
    }
    cout << ans+1;
}