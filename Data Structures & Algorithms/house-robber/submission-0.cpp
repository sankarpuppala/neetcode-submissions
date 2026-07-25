class Solution {
    vector<int> dp;
public:
    int rob(vector<int>& nums) {
        dp.resize(nums.size(),-1);
        return max(dfs(0,nums),dfs(1,nums));
        
    }
    int dfs(int i,vector<int>& nums){
        if(i>=nums.size()) return 0;
        else{
            if(dp[i] != -1){
                return dp[i];
            }
            dp[i] = max(nums[i]+dfs(i+2,nums),dfs(i+1,nums));
            return dp[i];
        } 
    }
};
