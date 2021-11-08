class Solution {
public:
    int climbStairs(int n) {
        int u0 = 1;
        int u1 = 2;
        if (n <= 2)
            return n;
        int temp;
        for (int i = 2; i < n; i++)
        {
            temp = u1;
            u1 = u0 + u1;
            u0 = temp;
        }
        return u1;
    }
};
