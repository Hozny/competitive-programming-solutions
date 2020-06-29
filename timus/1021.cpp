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
    int an, bn, x; 
    cin >> an; 
    set<int> a, b;
    for (int i = 0; i < an; ++i) { 
        cin >> x; 
        a.insert(x);
    }
    cin >> bn;
    for (int i = 0; i < bn; ++i) { 
        cin >> x; 
        b.insert(x);
    }
    string ans = "NO";
    for (auto t : a) { 
        if (b.count(10000 - t) != 0) { 
            ans = "YES";
        }
    }
    for (auto t : b) { 
        if (a.count(10000 - t) != 0) { 
            ans = "YES";
        }
    }
    cout << ans;
}