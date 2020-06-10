#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t; 
    int n, m , ps, pb; 
    for (int ti = 0; ti < t; ++ ti) { 
        cin >> n >> m >> ps >> pb; 
        char thet[n][m];
        int ans = 0;
        for (int i = 0; i < n; ++i) { 
            for (int j = 0; j < m; ++j) { 
                cin >> thet[i][j];
            }
        }
        for (int i = 0; i < n; ++i) { 
            for (int j = 0; j < m-1; ++j) { 
                if (thet[i][j] == '.' && thet[i][j+1] == '.') { 
                    if (ps*2 > pb) { 
                        ans += pb;
                        thet[i][j] = '*';
                        thet[i][j+1] = '*';
                        j += 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; ++i) { 
            for (int j = 0; j < m; ++j) { 
                if (thet[i][j] == '.') { 
                    ans += ps;
                }
            }
        }
        cout << ans << endl;
    }
}