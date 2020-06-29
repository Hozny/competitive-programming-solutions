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
    long long n; 
    cin >> n;
    long long on = n;
    vector<int> d; 
    bool pos = true;
    if (n == 0) cout << 10;
    else if (n < 10) cout << n;
     else { 
    for (int i = 9; i >= 2; --i) { 
        while (n % i == 0) { 
            d.push_back(i);
            n/=i;
        }
        
    }
    long long ans = 1;
    for (int i = 0; i < d.size(); ++i) { 
        ans *= d[i];
    }
    if (ans == on) { 
        for (int i = d.size() - 1; i >= 0; --i) 
            cout << d[i];
    } else { 
        cout << -1;
    }
     }
}