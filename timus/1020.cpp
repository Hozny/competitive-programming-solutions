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

double pi = 3.1415926;
int main() {
    int n;
    long double r;
    long double x, y, fx, fy, px, py;
    long double ans = 0;
    cin >> n >> r;
    for (int i = 0; i < n; ++i) { 
        cin >> x >> y; 
        if (i == 0) { 
            fx = x; fy = y;
        } else { 
            ans += sqrt((x-px)*(x-px) + (y-py)*(y-py));
        }
        if (i == n-1) { 
            ans += sqrt((x-fx)*(x-fx) + (y-fy)*(y-fy));
        }
        px = x; 
        py = y;
    }
    cout << fixed << setprecision(2) << ans + 2*pi*r;
}