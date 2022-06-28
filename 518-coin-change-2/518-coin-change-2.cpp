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
        vector<vector<int>> dp(n+1,vector<int>(amount+1,0));
        dp[0][0]=1;
        for(int i=1;i<=amount;i++)
        {
            if(i%coins[0]==0)
            {
                dp[0][i]=1;
            }
            else
            {
                dp[0][i]=0;
            }
        }
        for(int i=1;i<n;i++)
        {
            dp[i][0]=1;
            for(int j=1;j<=amount;j++)
            {
                if(coins[i]<=j)
                {
                    dp[i][j]=dp[i][j-coins[i]]+dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[n-1][amount];
    }
};