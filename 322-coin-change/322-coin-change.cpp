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
        
        vector<vector<int>> dp(n+1,vector<int>(amount+1,0));
        
        for(int i=0;i<=amount;i++)
        {
            if(i%coins[0])
            {
                dp[0][i]=1e9;
            }
            else
            {
                dp[0][i]=i/coins[0];
            }
        }
        for(int i=1;i<n;i++)
        {
            dp[i][0]=0;
            for(int j=1;j<=amount;j++)
            {
                if(j>=coins[i])
                    
                {
                    dp[i][j]=min(1+dp[i][j-coins[i]],dp[i-1][j]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
                
            }
        }
        if(dp[n-1][amount]>=1e9)
        {
            return -1;
        }
        return dp[n-1][amount];
    }
};