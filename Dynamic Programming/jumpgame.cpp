//valley approach
    bool canJump(vector<int>& nums) {
        int feasible = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(feasible < i) return false;
            
            feasible = max(feasible, nums[i]+i);
        }
        return true;
    }
