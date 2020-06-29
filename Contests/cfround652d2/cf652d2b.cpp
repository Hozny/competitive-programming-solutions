#include <iostream>
#include<climits>
#include<iomanip>
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

using namespace std; 

using namespace std;

int main() {
    int t;
    cin >> t; 
    int n; 
    while(t--) { 
        string in;
        cin >> n >> in;
        int count = 0;
        string nw = "";
        string temp="";
        string pref="";
        for (int i = 0; i < in.size(); ++i) { 
            if (in[i] == '1') { 
                ++count;
                temp += '1';
            } else if (in[i] == '0' && count != 0) { 
                int zero = 1;
                for (int j = i+1; j < in.size(); ++j) { 
                    if(in[j] == '1')
                        break;
                    ++zero;
                }
                i+=zero-1; 
                nw = "0";
                count = 0;
                temp = "";
            } else if (in[i] == '0') { 
                pref += '0';
            } 
        }
        cout << pref << nw << temp << endl;
    }
}