#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, m; 
    cin >> t; 
    for (int ti = 0; ti < t; ++ti) { 
        cin >> n >> m; 
        int a[n][m];
        int row[m] = {0};
        int col[n] = {0};
        for (int i = 0; i < n; ++i) { 
            for (int j = 0; j < m; ++j) { 
                cin >> a[i][j];
                if (a[i][j] == 1) { 
                    row[j] = 1;
                    col[i] = 1;
                }
            }
        }
        int numrow = 0;
        int numcol = 0;
        for (int i = 0; i < m; ++i) { 
            if (row[i] == 1) { 
                numrow += 1;
            }
        }
        for (int i = 0; i < n; ++i) { 
            if(col[i] == 1) { 
                numcol += 1;
            }
        }
        if (min(n-numcol, m-numrow)%2 == 1) { 
            cout << "Ashish" << endl;
        }  else { 
            cout << "Vivek" << endl;
        }
    }
}