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
    int n; 
    cin >> n; 
    stack<int> a; 
    stack<int> b;
    int x, y; 
    for (int i = 0; i < n; ++i) { 
        cin >> x >> y; 
        a.push(x); 
        b.push(y);
    }
    int carry = 0; 
    stack<int> ans;
    for (int i = 0; i < n; ++i) { 
        if (i == n - 1) { 
            ans.push(a.top() + b.top() + carry);
        } else { 
            ans.push( (a.top() + b.top() + carry) % 10);
            carry = (a.top() + b.top() + carry) / 10;
        }
        a.pop(); 
        b.pop();
    }
    while(ans.size() > 0) { 
        cout << ans.top(); 
        ans.pop();
    }
}