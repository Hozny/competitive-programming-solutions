#include <bits/stdc++.h>

using namespace std;

bool winner(string m) { 
    bool row = (((m[0]!= '.') && (m[0] == m[1]) && (m[1] == m[2])) ||
                ((m[3]!= '.') && (m[3] == m[4]) && (m[4] == m[5])) || 
                ((m[6]!= '.') && (m[6] == m[7]) && (m[7] == m[8])));
                
    bool col = (((m[0] != '.') && (m[0] == m[3]) && (m[3] == m[6])) ||
                ((m[1] != '.') && (m[1] == m[4]) && (m[4] == m[7])) || 
                ((m[2] != '.') && (m[2] == m[5]) && (m[5] == m[8])));

    bool dig = (((m[0] != '.') && (m[0] == m[4]) && (m[4] == m[8])) ||
                ((m[2] != '.') && (m[2] == m[4]) && (m[4] == m[6])));

    return row || col || dig;
}

int main() {
    int t; 
    string tempin; 
    cin >> t;
    for (int ti = 0; ti < t; ++ti) { 
        string in = "";
        for (int i = 0; i < 3; ++i) { 
            cin >> tempin; 
            in += tempin;  
        }
        string start = ".........";
        queue<pair<string, bool>> qu; 
        qu.push(make_pair(start, 1));

        string ans = "no";
        while (qu.size() > 0) { 
            string cur = qu.front().first;
            bool player = qu.front().second;  
            qu.pop();
            if (cur == in) { 
                ans = "yes";
                break;
            }
            if (winner(cur)) { 
                continue;
            }  
            for(int i = 0; i < 9; ++i) { 
                if (cur[i] == '.') { 
                    string temp = cur; 
                    temp[i] = (player ? 'X' : 'O');
                    if (temp[i] == in[i]) { 
                        qu.push(make_pair(temp, !player));
                    }
                }
            }
            
        }
        cout << ans << endl;
    } 
}