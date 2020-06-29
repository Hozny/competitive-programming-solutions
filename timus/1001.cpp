#include <iostream>
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
vector<long double> ans;
int main() {
    long long n; 
    while (cin >> n) { 
        long double x = sqrt(n);
        ans.push_back(x);
    }
    for (int i = ans.size() - 1; i >= 0; --i)
        cout << fixed << setprecision(5) << ans[i] << endl; 
}