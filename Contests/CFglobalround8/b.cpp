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
    long long k; 
    cin >> k; 
    int a[10];
    for (int i = 0; i < 10; ++i) 
        a[i] = 1;
    while(1) { 
        long long sum = 1;
        if (sum >= k)
                break;
        for (int i = 0; i < 10; ++i) { 
            ++a[i];
            sum = 1;
            for (int j = 0; j < 10; ++j) 
                sum*=a[j];
            if (sum >= k)
                break;
        }
        if (sum>=k)
            break;
    }
    string cf = "codeforces";
    for (int i = 0; i < 10; ++i) { 
        for (int j = 0; j < a[i]; ++j) { 
            cout << cf[i];
        }        
    }
}