class Solution {
public:
    vector<vector<int>> dp;
    int pro(vector<int> &prices,int i,int buy)
    {
        int n=prices.size();
        if(i==n)
        {
            return 0;
        }
        if(dp[i][buy]!=-1)
        {
            return dp[i][buy];
        }
        if(buy)
        {
            return dp[i][buy]=max(-prices[i]+pro(prices,i+1,0),pro(prices,i+1,1));
        }
        return dp[i][buy]=max(prices[i]+pro(prices,i+1,1),pro(prices,i+1,0));
    }
    int maxProfit(vector<int>& prices) {
        dp.resize(prices.size()+1,vector<int>(2,-1));
        int n=prices.size();
        dp[n][0]=0;
        dp[n][1]=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<2;j++)
            {
                if(j)
                {
                    dp[i][j]=max(-prices[i]+dp[i+1][0],dp[i+1][1]);
                }
                else
                {
                    dp[i][j]=max(prices[i]+dp[i+1][1],dp[i+1][0]);
                }
            }
        }
        return dp[0][1];
    }
};