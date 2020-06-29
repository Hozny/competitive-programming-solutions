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
    string g; 
    cin >> g; 
    long int ans = 1;
    int k = g.size();
    
    for (int i = n; i > 1; i-=k)
        ans*=i;
    cout << ans  ; 
}