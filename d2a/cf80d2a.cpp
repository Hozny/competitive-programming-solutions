#include <bits/stdc++.h>

using namespace std;

int main() {
    int sieve[100] = {0};
    string ans = "YES";
    int n, m;
    cin >> n >> m;
    for (int i = 2; i < 100; ++i) { 
        for (int j = i+i; j < 100; j+=i) { 
            sieve[j] = 1;
        }
    }
    for(int i = n + 1; i <= m; ++i) { 
        if (sieve[i] == 0) { 
            if (i != m) { 
                ans = "NO";
            }
            break;
        } else if (i == m) { 
            ans = "NO";
        }
    }
    cout << ans;
}