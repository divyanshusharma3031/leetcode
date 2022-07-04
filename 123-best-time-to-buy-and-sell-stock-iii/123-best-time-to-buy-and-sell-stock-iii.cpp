class Solution {
public:
    int pro(vector<int> &prices,int ind,int buy,int cap,vector<vector<vector<int>>> &dp){
        int n=prices.size();
        if(ind==n)
        {
            return 0;
        }
        if(cap==0)
        {
            return 0;
        }
        if(dp[ind][buy][cap]!=-1)
            {
                return dp[ind][buy][cap];
            }
        if(buy)
        {
            return dp[ind][buy][cap]=max(-prices[ind]+pro(prices,ind+1,0,cap,dp),pro(prices,ind+1,1,cap,dp));
        }
        return dp[ind][buy][cap]=max(prices[ind]+pro(prices,ind+1,1,cap-1,dp),pro(prices,ind+1,0,cap,dp));
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size()+1,vector<vector<int>>(2,vector<int>(3,0)));
        int n=prices.size();
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                dp[n][i][j]=0;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<2;j++)
            {
                dp[n][j][0]=1;
                for(int k=1;k<3;k++)
                {
                    if(j)
                    {
                        dp[i][j][k]=max(-prices[i]+dp[i+1][0][k],dp[i+1][1][k]);
                    }
                    else
                    {
                        dp[i][j][k]=max(prices[i]+dp[i+1][1][k-1],dp[i+1][0][k]);
                    }
                }
            }
        }
        return dp[0][1][2];
    }
};