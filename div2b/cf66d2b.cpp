#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n; 
    int a[n]; 
    for (int i = 0; i < n; ++i) { 
        cin >> a[i];
    }
    int max = 0; 
    int count = 0; 
    bool l = true;
    bool r = true;
    for (int i = 0; i < n; ++i) { 
        count = 1; 
        l = true;
        r = true;
        for (int j = 1; j < n; ++j) { 
            if (l && (i - j) >= 0) { 
                if (a[i-j] <= a[i-j+1] ) { 
                    count += 1;
                } else { 
                    l = false;
                }
            }
            if (r && (i + j) < n) { 
                if (a[i+j] <= a[i+j-1]) { 
                    count += 1;
                } else { 
                    r = false;
                }
            }
        }
        if (count > max) { 
            max = count;
        }
    }
    cout << max;
}