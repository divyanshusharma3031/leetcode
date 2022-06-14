class Solution {
public:
    int combo(int amount,vector<int> &coins,int n,vector<vector<int>> &dp)
    {
        if(n==0)
        {
            return 0;
        }
        if(amount<0)
        {
            return 0;
        }
        if(amount==0)
        {
            return 1;
        }
        if(dp[n][amount]!=-1)
        {
            return dp[n][amount];
        }
        return dp[n][amount]=combo(amount-coins[n-1],coins,n,dp)+combo(amount,coins,n-1,dp);
    }
    int change(int amount, vector<int>& coins) {
        sort(coins.begin(),coins.end());
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        return combo(amount,coins,n,dp);
    }
};