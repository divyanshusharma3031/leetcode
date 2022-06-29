class Solution {
public:
//     we just need to find catalan number.
    // Cn=(2*n)!/(n+1)!*(n)!;
    int CalcCatalan(int n)
    {
        vector<int> dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            int t=0;
            for(int j=0;j<i;j++)
            {
                t=t+dp[j]*dp[i-j-1];
            }
            dp[i]=t;
        }
        return dp[n];
    }
    int numTrees(int n) {
        return CalcCatalan(n);
    }
};