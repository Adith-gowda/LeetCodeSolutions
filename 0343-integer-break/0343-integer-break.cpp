class Solution {
public:
    int solve(int n, vector<int> &dp)
    {
        if(n == 0) return 1;

        if(dp[n] != -1) return dp[n];

        int curr = -2e9;
        for(int i = 1; i <= n; i++)
            curr = max(curr, i * solve(n - i, dp));

        return dp[n] = curr;
    }
    int integerBreak(int n) {
        if(n <= 3) return n - 1;
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};