class Solution {
public:
    int m=46;
    int dp[46];
    int climbStairs(int n) {
        if(n<0)
        {
            return 0;
        }
        if(n==0)
        {
            return 1;
        }
        if(dp[n]!=0)
        {
            return dp[n];
        }
        return dp[n]=climbStairs(n-1)+climbStairs(n-2);
    }
};