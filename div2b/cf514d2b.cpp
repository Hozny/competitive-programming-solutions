#include <bits/stdc++.h>
/* wrong answer: silly way of checking if 3 points are on the same line
solution: if we have points a, b, c  then let slope(a,b) be (by-ay)/(bx-ax) then slope(a,b)==slope(a,c) iff theyre on the same line
                    but we should instead multiply it out to avoid decimals so (by-ay)(cx-ax)==(cy-ay)(bx-ax)
even better solution: 
        knowing the above fact then any poitns with equal slopes where the slopers where calculated using a common points are obviously
        on the same line 
            so calculate the slope, simplify it using gcd, and put it into a set, size of the set is unique slopes i.e number of shots required
        
*/
using namespace std;

int main() {
    // this solution is the result of tunnel visioning on a bad approach

    // int n, gx, gy; 
    // cin >> n >> gx >> gy; 
    // set<pair<float, float>> v;
    // int tx, ty;
    // vector<int> xvals; 
    // for (int i = 0; i < n; ++i) { 
    //     cin >> tx >> ty;
    //     v.insert({tx,ty});
    //     // v[{tx, ty}] += 1;
    //     xvals.push_back(tx);
    // }
    // int ans = 0;
    // while (v.size() > 0) { 
    //     for (auto x: v) { 
    //         tx = x.first;
    //         ty = x.second;
    //         break;
    //     }
    //     v.erase(v.begin());
    //     float m, b;
    //     if (gx != tx) { 
    //         m = ((float)gy-ty)/(gx-tx);
    //         b = (float)gy-m*gx;
    //         if (m == 99999) { 
    //             while (true) { 
    //                 ++ans;
    //             }
    //         }
    //     } else  { 
    //         m = 99999;
    //     }
    //     for (auto x: xvals) { 
    //         if (m != 99999) { 
    //             if (v.find({x, (float)m*x + b}) != v.end()) { 
    //                 v.erase(v.find({x, (float)m*x+b}));
    //             }
    //         } else { 
    //             stack<pair<int,int>> remove;
    //             for (auto p: v) { 
    //                 if (p.first == gx) { 
    //                     remove.push({p.first, p.second});
    //                 }
    //             }
    //             while(remove.size() > 0) { 
    //                 v.erase(v.find({remove.top().first, remove.top().second}));
    //                 remove.pop(); 
    //             }
    //         }
    //     }
    //     ++ans;
    // }
    cout << ans;
}