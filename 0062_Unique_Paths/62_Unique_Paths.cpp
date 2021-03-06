/**
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Paths.
Memory Usage: 6.5 MB, less than 21.47% of C++ online submissions for Unique Paths.
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m == 1 || n == 1) return 1;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][1] = 1;
        dp[1][0] = 1;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(j-1>= 0)
                    dp[i][j] += dp[i][j-1];
                if(i-1>=0)
                    dp[i][j] += dp[i-1][j];
            }
        }
        return dp[m-1][n-1];
    }
};

/**
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Paths.
Memory Usage: 6.4 MB, less than 37.24% of C++ online submissions for Unique Paths.
*/
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1));
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        return dp[m-1][n-1];
    }
};
