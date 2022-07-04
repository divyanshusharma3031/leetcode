class Solution {
public:
    int maxProfit(int x, vector<int>& prices) {
       vector<vector<int>> dp(2,vector<int>(x+1,0));
        int n=prices.size();
        for(int i=n-1;i>=0;i--)
        {
            vector<vector<int>> curr(2,vector<int>(x+1,0));
            for(int j=0;j<2;j++)
            {
                curr[j][0]=0;
                for(int k=1;k<=x;k++)
                {
                    if(j)
                    {
                        curr[j][k]=max(-prices[i]+dp[0][k],dp[1][k]);
                    }
                    else
                    {
                        curr[j][k]=max(prices[i]+dp[1][k-1],dp[0][k]);
                    }
                }
            }
            dp=curr;
        }
        return dp[1][x]; 
    }
};