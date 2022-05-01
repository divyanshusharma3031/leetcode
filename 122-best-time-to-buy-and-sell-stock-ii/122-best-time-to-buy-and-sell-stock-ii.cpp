class Solution {
public:
    int maxpro(int i,vector<int> &prices,vector<int> &dp)
    {
        const int n=prices.size();
        if(i==n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int ans=0;
        for(int j=i;j<n;j++)
        {
            if(prices[j]>prices[i])
            {
                ans=max(ans,prices[j]-prices[i]+maxpro(j+1,prices,dp));                
            }
        }
        ans=max(ans,maxpro(i+1,prices,dp));
        return dp[i]=ans;
    }
    int maxProfit(vector<int>& prices)
    {
        int n=prices.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i<n-1&& prices[i]<prices[i+1])
            {
                ans+=prices[i+1]-prices[i];
            }
        }
        return ans;
    }
};