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


int main() {
    int n; 
    cin >> n; 
    int x = 0; int y = 0;
    cout << n+2 + 2*(n+1) << endl;
    for (int i = 0; i < n+2; ++i) { 
        if (i == n+1) { 
            cout << x << " " << y << endl;
        } else { 
            cout << x << " " << y << endl;
            cout << x+1 << " " << y << endl;
            cout << x << " " << y+1 << endl;
        }
        ++x;
        ++y;

    }
}