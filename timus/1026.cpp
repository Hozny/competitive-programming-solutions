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
    int a[n];
    for (int i = 0; i < n; ++i) { 
        cin >> a[i];
    }
    sort(a, a+n); 
    string garb; 
    cin >> garb; 
    int k;
    cin >> k;
    vector<int> ans;
    for (int x,i = 0; i < k; ++i) { 
        cin >> x; 
        ans.push_back(a[x-1]);
    } 
    for (auto t : ans) 
        cout << t << endl;
}