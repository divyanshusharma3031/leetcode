class Solution {
public:
    int coin(vector<int> &coins,int n,int amount,vector<vector<int>> &dp)
    {
        if(n==0 || amount<0)
        {
            return INT_MAX-140;
        }
        if(amount==0)
        {
            return 0;
        }
        if(dp[n][amount]!=-1)
        {
            return dp[n][amount];
        }
        return dp[n][amount]=min(1+coin(coins,n,amount-coins[n-1],dp),coin(coins,n-1,amount,dp));
    }
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();
        
        sort(coins.begin(),coins.end());
        
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        
        int ans=coin(coins,n,amount,dp);
        if(ans==(INT_MAX-140))
        {
            return -1;
        }
        return ans;
    }
};