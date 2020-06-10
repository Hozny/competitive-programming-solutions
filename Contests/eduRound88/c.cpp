#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t; 
    double c, h, d; 
    for (int ti = 0; ti < t; ++ti) { 
        cin >> h >> c >> d; 
        double case1 = 0; 
        double case2 = 0; 
        double case3 = 0;  
        if (h + c == 2*d){ 
            cout << 2 << endl;
        } else { 
            case1 = round((c-d)/(h+c-2*d));
            case1 = case1*2 - 1;
            
            case3 = round((0-d)/(h+c-2*d));
            double anss[2] = {case1,  case3};
            sort(anss, anss+2);
            for (int i = 0; i < 2; ++i) { 
                if (anss[i] > 0) { 
                    cout << anss[i] <<endl;
                    break;
                } else if (i == 1) { 
                   cout << 1 << endl; 
                }
            }
        }
    }
}