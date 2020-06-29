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
    int t; 
    cin >> t; 
    int n; 
    while (t--) { 
        cin >> n; 
        vector<pair<int, int>> e;
        int x;
        int nume = 0;
        for (int i = 0; i < 2*n; ++i ) { 
            cin >> x; 
            if (x % 2 == 0) { 
                e.push_back({0,i+1});
                ++nume;
            } else { 
                e.push_back({1, i+1});
            }
        }
        sort(e.begin(), e.end());
        int count = 0;
        for (int i = 0; i < nume-1 && count<n-1; ++i) { 
            if (i+1 < nume-1) { 
                cout << e[i].second << " " << e[i+1].second << endl;
                ++i;
                ++count;
            }
        }
        for (int i = nume; i < e.size() && count<n-1; ++i) { 
            if (i+1 < e.size()) { 
                cout << e[i].second << " " << e[i+1].second << endl;
                ++i;
                ++count;
            }
        }
    }
}