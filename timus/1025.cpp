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
    int a[n]; 
    for (int i = 0; i < n; ++i)  { 
        cin >> a[i];
        a[i] = a[i]/2 + 1 ;
    }
    sort(a, a+n);
    long long sum = 0;
    for (int i = 0; i < n/2 + 1; ++i) { 
        sum += a[i];
    }
    cout << sum;
    
}