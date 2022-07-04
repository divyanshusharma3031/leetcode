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
        vector<vector<vector<int>>> dp(prices.size()+1,vector<vector<int>>(2,vector<int>(3,-1)));
        return pro(prices,0,1,2,dp);
    }
};