class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0;
        for(int i=1; i< prices.size(); i++){
            if(prices[i]-prices[i-1] >= 0){
                sum += prices[i] - prices[i-1];
            }else{
                continue;
            }
        }
        return sum;
    }
};
