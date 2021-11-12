class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        while(e >= s){
            int mid = (e+s)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] >= nums[s]){
                if(nums[s] <= target && target <= nums[mid]){
                    e = mid - 1;
                }else{
                    s = mid + 1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[e]){
                    s = mid + 1;
                }else{
                    e = mid - 1;
                }
            }
            
        }
        return -1;
    }
};
