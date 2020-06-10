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
    while (true) { 
        string in;
        cin >> in; 
        if (in == "end") break;
        
        string start = ".........";
        queue<pair<string, bool>> qu; 
        qu.push(make_pair(start, 1));

        string ans = "invalid";
        while (qu.size() > 0) { 
            string cur = qu.front().first;
            bool player = qu.front().second;  
            qu.pop();
            // cout << in << " " << cur << endl;  
            if (winner(cur)) {
                if (cur == in) { 
                    ans = "valid";
                    break;
                } else { 
                    continue;
                }
            }  
            for (int i = 0; i < 9; ++i) { 
                if (cur[i] == '.') { 
                    break;
                } else if (i == 8) { 
                    ans ="valid";
                }
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