#include <iostream>

using namespace std; 

long long dp[501][501] = {0};
int main() {
  int n; 
  cin >> n; 
  dp[0][0] = 1;
  for (int last = 1; last < 501; ++last) { 
    for (int left = 0; left < 501; ++left) { 
      dp[last][left] = dp[last-1][left];
      if (left >= last) { 
        dp[last][left] += dp[last-1][left-last];
      }
    }
  }

  cout << dp[n][n]-1;
}