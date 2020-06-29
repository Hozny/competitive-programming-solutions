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
    int max = 400000;
    int p[max];
    cin >> n;
    for (int i = 0; i < max; ++i)
        p[i] = 1;
    for (int i = 2; i < max; ++i) { 
        for (int j = i+i; j < max; j+=i) 
            p[j] = 0;
    }
    
    vector<int> v;
    for (int i = 2; i<max; ++i) { 
        if (p[i] == 1)
            v.push_back(i);
    }
    vector<int> ans;
    int temp;
    for (int x, i = 0; i < n; ++i) { 
        cin >> temp; 
        ans.push_back(v[temp-1]);
    }
    for (int i = 0; i < ans.size(); ++i) { 
        cout << ans[i] << endl;
    }
    
    
}