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
       vector<vector<int>> dp(2,vector<int>(3,0));
        int n=prices.size();
        for(int i=n-1;i>=0;i--)
        {
            vector<vector<int>> curr(2,vector<int>(3,0));
            for(int j=0;j<2;j++)
            {
                curr[j][0]=0;
                for(int k=1;k<3;k++)
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
        return dp[1][2];
    }
};