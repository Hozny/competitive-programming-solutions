#include <iostream>
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

int n; 
vector<int> a;
int solve(int i, int l, int r) { 
    if (i == n)
        return abs(l-r);
    return min(solve(i+1, l+a[i], r),solve(i+1, l, r+a[i]));
}
int main() {
    cin >> n; 
    for (int x,i = 0; i < n; ++i) { 
        cin >> x;
        a.push_back(x);
    }
    cout << solve(0, 0, 0);
}