class Solution {
public:
    int nthUglyNumber(int n) {
        if(n==1)
        {
            return 1;
        }
        vector<int> dp(n,0);
        dp[0]=1;
        int x;
        int y;
        int z;
        x=y=z=0;
        for(int i=1;i<n;i++)
        {
            dp[i]=min(dp[x]*2,min(dp[y]*3,dp[z]*5));
            if(dp[i]==dp[x]*2)
            {
                x++;
            }
            if(dp[i]==dp[y]*3)
            {
                y++;
            }
            if(dp[i]==dp[z]*5)
            {
                z++;
            }
        }
        return dp[n-1];
   }
};