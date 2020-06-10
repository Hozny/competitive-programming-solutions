#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x; 
    cin >> n >> m >> x;
    char k[n][m]; 
    int lower[26] = {0};
    int av[26] = {0};
    vector<pair<int, int>> shifts; 
    char o; 
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            cin >> o;
            k[i][j] = o;
            if (o != 'S') { 
                av[o-'a'] = 1;
            }
        }
    }
    for (int i = 0; i < 26; ++i) { 
        lower[i] = INT_MAX;
    }
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            if (k[i][j] == 'S') { 
                for (int ii = 0; ii < n; ++ii) { 
                    for (int jj = 0; jj < m; ++jj) { 
                        int templen = pow(ii - i, 2) + pow(jj - j , 2);
                        if (k[ii][jj] == 'A') { 
                            continue;
                        }
                        else if (k[ii][jj] >= 'a' && k[ii][jj] <= 'z') { 
                            if (templen < lower[k[ii][jj] - 'a']) { 
                                lower[k[ii][jj] - 'a'] = templen;
                            }
                        } 
                    }
                }
            }
        }
    }
    int len; 
    cin >> len;
    char c; 
    int ans = 0;
    for (int i = 0; i < len; ++i) { 
        cin >> c; 
        if(c >= 'a' && c <='z') { 
            if (av[c - 'a'] == 0) { 
                ans = -1;
                break;
            }
        } else { 
            if (lower[c-'A'] == INT_MAX) { 
                ans = -1;
                break;
            } else if (lower[c-'A'] > x*x) { 
                ans += 1; 
            }
        }
    }
    cout << ans; 

}