class Solution {
public:
    int dp[101];
    int maxrob(vector<int> &nums, int i){
        if(i<0) return 0;
        if(dp[i] >= 0) return dp[i];
        return dp[i] = max(maxrob(nums,i-2)+nums[i],maxrob(nums,i-1));
    }
    int rob(vector<int>& nums) {
        for(int i = 0; i<101;i++){
            dp[i] = -1;
        }
        return maxrob(nums,nums.size()-1);
    }
};
