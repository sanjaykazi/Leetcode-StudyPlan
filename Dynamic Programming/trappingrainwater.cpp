class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxleft = height[0];
        int maxright = height[n-1];
        int trappedwater = 0;
        int left = 1;
        int right = n-2;
        while(left <= right){
            if(maxleft < maxright){
                if(maxleft <= height[left]){
                    maxleft = height[left];
                }else{
                    trappedwater += maxleft - height[left];
                }
                left++;
            }else{
                if(maxright < height[right]){
                    maxright = height[right];
                }else{
                    trappedwater += maxright - height[right];
                }
                right--;
            }
        }
        return trappedwater;
        // int n = height.size();
        // vector<int> left(n);
        // left[0] = height[0];
        // for(int i = 1; i < n; i++){
        //     left[i] = max(left[i-1], height[i]);
        // }
        // vector<int> right(n);
        // right[n-1] = height[n-1];
        // for(int i = n-2; i >= 0; i--){
        //     right[i] = max(right[i+1], height[i]);
        // }
        // int ans = 0;
        // for(int i = 0; i < n; i++){
        //     ans += min(left[i],right[i]) - height[i];
        // }
        // return ans;
    }
};
