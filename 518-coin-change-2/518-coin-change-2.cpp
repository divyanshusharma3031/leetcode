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
        // sort(coins.begin(),coins.end());
        int n=coins.size();
        vector<int> dp(amount+1,0);
        dp[0]=1;
        for(int i=1;i<=amount;i++)
        {
            if(i%coins[0]==0)
            {
                dp[i]=1;
            }
            else
            {
                dp[i]=0;
            }
        }
        for(int i=1;i<n;i++)
        {
            vector<int> temp(amount+1,0);
            temp[0]=1;
            for(int j=0;j<=amount;j++)
            {
                if(coins[i]<=j)
                {
                    temp[j]=temp[j-coins[i]]+dp[j];
                }
                else
                {
                    temp[j]=dp[j];
                }
            }
            dp=temp;
        }
        
        return dp[amount];
    }
};