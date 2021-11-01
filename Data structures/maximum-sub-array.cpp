int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int max_so_far = arr[0];
      int max_ending_here = arr[0];
      int i;
      for (i = 1; i < n; i++)
      {
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
      }
      return max_so_far;
        
    }
