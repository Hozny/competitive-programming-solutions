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

using namespace std; 

int gcd(int a, int b) { 
    if (a < b) swap(a, b);
    while (b != 0 && a > b) { 
        a %= b; 
        swap(a, b);
    }
    return a;
}

int main() { 
    long long int l, r; 
    cin >> l >> r; 
    string ans = "YES";
    cout << ans << endl;
    for (int i = 0; i < (r - l); i += 2) { 
        cout << l + i << " " << l + i + 1 << endl;
    } 
}

