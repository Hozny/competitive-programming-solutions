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

/*not solved*/
using namespace std;
int n, k;
long long solve(int i, int cons) { 
    if (i == n)  
        return 1; // 1 0 0 0
    if (i == 0) 
        return (k-1)*solve(i+1, 0);
    if (cons == k) { 
        return solve(i+1, 0); 
    } else {
        return (k)*solve(i+1, 0) * solve(i+1, cons+1); 
    } 
}
int main() {
    cin >> n >> k;
    cout << solve(0, 0);
}