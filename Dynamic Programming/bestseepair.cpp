class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& a) {
    int res = INT_MIN;
    int api = a[0] + 0;
    for(int i = 1; i< a.size(); i++){
        res = max(res,api+a[i]-i);
        api = max(api,a[i]+i);
    }
    return res;
}
};
