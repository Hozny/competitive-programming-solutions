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
    int ti; 
    cin >> ti; 
    int a, b, g;
    while (ti--) { 
        cin >> a >> b >> g; 
        int n = 0; 
        while (1) { 
            if (a < b) { 
                swap(a, b);
            }
            if (a > g )
                break;
            n += (a + b - 1) / a;
            b += (a+b-1)/a * a;
        }
        cout << n << endl;
    }
}