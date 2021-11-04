class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currmax = 0;
        int maxsofar = 0;
        for(int i = 1; i < prices.size();i++){
            currmax = max(0, currmax += prices[i] - prices[i-1]);
            maxsofar = max(maxsofar, currmax);
        }
        return maxsofar;
    }
};
