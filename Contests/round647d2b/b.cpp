#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t; 
    int n, abc, ans, x; 
    for (int ti = 0; ti < t; ++ti) { 
        cin >> n; 
        cin >> x; 
        abc = x;
        set<int> nums; 
        nums.clear();
        nums.insert(x);
        for (int i = 1; i < n; ++i) { 
            cin >> x; 
            nums.insert(x);
            abc = abc^x;
        }
        ans = -1;
        
        for (int i = 1; i <= 20000; ++i) { 
            bool found = true; 
            for (auto b : nums) { 
                if (nums.count(b^i) == 0) { 
                    found = false;
                    break;
                }
            }
            if (found) { 
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}