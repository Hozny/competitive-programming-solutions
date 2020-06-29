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
    int t; 
    cin >> t; 
    while(t--) { 
        string in; 
        cin >> in; 
        long long int res = 0;
        long long int cur = 0;
        bool ok = true;
        int pref[in.size()+1]; 
        pref[0] = 0;
        for (int i = 0; i < in.size(); ++i) { 
            int x = 0;
            if (in[i] == '+') { 
                x = 1; 
            } else { 
                x = -1;
            }
            pref[i+1] = pref[i] + x; 
            
        }
        set<int> found; 
        for (int i = 1; i <= in.size(); ++i) { 
            if (pref[i] < 0 && found.count(pref[i]) == 0) { 
                found.insert(pref[i]);
                res+=i;
            }
        }
        
        res+=in.size();
        cout << res << endl;

    }
}