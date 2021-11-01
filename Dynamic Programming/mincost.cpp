int helper(int i, vector<int>& cost, vector<int>& dp){
        if(i>=cost.size()) return 0;
        if(dp[i]!=INT_MAX) return dp[i];
        return dp[i]=min(cost[i]+helper(i+1, cost, dp), cost[i]+helper(i+2, cost, dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int i=0;
        vector<int> dp(cost.size(), INT_MAX);
        return min(helper(i, cost, dp),helper(i+1, cost, dp));
    }
