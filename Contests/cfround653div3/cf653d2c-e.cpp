#include <iostream>
#include <climits>
#include <iomanip>
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
#include <bits/stdc++.h>
#define fileio freopen("input.txt", "r", stdin),freopen("out.txt", "w", stdout)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define ll long long

using namespace std;

int main() {
    SPEED;
    int n, k; 
    cin >> n >> k; 
    int t, ax, bx; 
    vector<int> a,b,both;
    for (int i = 0; i < n; ++i) { 
        cin >> t >> ax >> bx; 
        if (ax == 1 && bx == 1) {
            both.push_back(t);
        } else if (ax == 1) { 
            a.push_back(t);
        } else if (bx == 1) { 
            b.push_back(t);
        }
    }
    if (a.size() + both.size() < k || b.size() + both.size() < k) { 
        cout << -1;
    } else { 
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(both.begin(), both.end());
        int len = max(a.size(), max(b.size(), both.size()));
        int l, m, r;
        l = m = r = 0;
        ll ans = 0; 
        int ac = 0;
        int bc = 0;
        for (int i = 0; i < len; ++i) { 
            if (ac >= k && bc >= k)
                break;
            if (l < a.size() && m < both.size() && r < b.size()) { 
                if (ac >= k) { 
                    ++bc;
                    if (both[m] <= b[r]) { 
                        ans+=both[m];
                        ++m;
                    } else { 
                        ans+=b[r];
                        ++r;
                    }
                } else if (bc >= k){ 
                    ++ac;
                    if (both[m] <= a[l]) { 
                        ans+=both[m];
                        ++m;
                    } else { 
                        ans+=a[l];
                        ++l;
                    }
                }
                else if (a[l] + b[r] < both[m]) { 
                    ans += a[l] + b[r];
                    ++l;
                    ++r;
                    ++ac; ++bc;
                } else { 
                    ans += both[m];
                    ++m;
                    ++ac; ++bc;
                }
            } else if (l < a.size() && r < b.size()) { 
                if (ac < k) { 
                    ++ac;
                    ans += a[l];
                    ++l;
                }
                if (bc < k) { 
                    ++bc; 
                    ans += b[r];
                    ++r;
                }
            } else if (l < a.size() && m < both.size()) {
                if (bc < k) { 
                    ++bc; ++ac;
                    ans += both[m];
                    ++m;
                } else { 
                    if (both[m] <= a[l]) { 
                        ans += both[m];
                        ++ac; ++bc; ++m;
                    } else { 
                        ans += a[l];
                        ++l;
                        ++ac;
                    }
                } 
            } else if (r < b.size() && m < both.size()) { 
                if (ac < k) { 
                    ++bc; ++ac;
                    ans += both[m];
                    ++m;
                } else { 
                    if (both[m] <= b[r]) { 
                        ans+=both[m];
                        ++bc;
                        ++ac;
                        ++m;
                    } else { 
                        ans += b[r];
                        ++r;
                        ++bc;
                    }
                }
            } else if (l < a.size()) { 
                ans+=a[l];
                ++l; 
                ++ac;
            } else { 
                ans += b[r];
                ++r;
                ++bc;
            }
        }
        if (ac >= k && bc >= k) { 
            cout << ans << endl;
        } else { 
            cout << -1;
        }
    }
}