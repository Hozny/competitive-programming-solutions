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

int main() {
    int n; 
    cin >> n; 
    long long sum = 0;
    for (int i = 1; i <= abs(n); ++i) { 
        sum+=i;
    }
    if(n==0)
        cout << 1;
    else
        cout << sum*n/abs(n) + (n > 0 ? 0 : 1);
}