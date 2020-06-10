#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; 
    char p;
    cin >> n >> m >> p; 
    char a[n][m]; 
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            cin >> a[i][j];
        }
    }
   map<char, int> d; 
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            if (a[i][j] == p) { 
                if (i > 0 && a[i-1][j] != p && a[i-1][j] != '.') { 
                    d[a[i-1][j]] = 1; 
                }
                if (i < n - 1 && a[i+1][j] != p && a[i+1][j] != '.') { 
                    d[a[i+1][j]] = 1;
                }
                if (j > 0 && a[i][j-1] != p && a[i][j-1] != '.') { 
                    d[a[i][j-1]] = 1;
                }
                if (j < m - 1 && a[i][j+1] != p && a[i][j+1] != '.') { 
                    d[a[i][j+1]] = 1;
                }
            }
        }
    }
    cout << d.size();
}