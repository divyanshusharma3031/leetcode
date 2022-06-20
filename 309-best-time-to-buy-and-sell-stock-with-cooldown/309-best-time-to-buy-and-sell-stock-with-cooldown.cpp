class Solution {
public:
    vector<int> dp;
    int mxpro(vector<int> &prices,int n,int i)
    {
        if(i>=n)
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
            ans=max(ans,prices[j]-prices[i]+mxpro(prices,n,j+2));
        }
        ans=max(ans,mxpro(prices,n,i+1));
        return dp[i]=ans;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        dp.resize(n+1,-1);
        return mxpro(prices,n,0); 
    }
};