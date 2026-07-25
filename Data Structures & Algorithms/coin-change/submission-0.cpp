class Solution {
    vector<int> dp;

    int dfs(int rem, vector<int>& coins) {
        if (rem == 0)
            return 0;

        if (rem < 0)
            return 1e9;

        if (dp[rem] != -1)
            return dp[rem];

        int ans = 1e9;

        for (int coin : coins) {
            ans = min(ans, 1 + dfs(rem - coin, coins));
        }

        return dp[rem] = ans;
    }

public:
    int coinChange(vector<int>& coins, int amount) {
        dp.assign(amount + 1, -1);

        int ans = dfs(amount, coins);

        return ans == 1e9 ? -1 : ans;
    }
};