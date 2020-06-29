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

int n; 
int num[9] = {0};
bool add1() { 
    num[n-1] += 1;
    for (int i = n-1; i>= 0; --i) { 
        if (num[i] >= 10) { 
            if (i == 0)
                return false;
            num[i] = 0;
            num[i-1]+=1;
        }
    }
    return true;
}
bool solve() { 
    int left = 0; 
    int right = 0;
    for (int i = 0; i < n/2; ++i) { 
        left += num[i];
        right += num[n-i-1];
    }
    return (left == right);
}
int main() {
   cin >> n; 
   long long ans = 1; 
   while(add1()) { 
       if (solve())
        ++ans;
   }
   cout << ans;
}