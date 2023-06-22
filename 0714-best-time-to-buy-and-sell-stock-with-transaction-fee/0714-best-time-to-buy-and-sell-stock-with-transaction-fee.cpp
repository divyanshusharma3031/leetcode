class Solution {
public:
    int dp[50001][2];
    int fee;
    int solve(int i,int buy,vector<int> &prices)
    {
        int n=prices.size();
        if(i==n)
        {
            return 0;
        }
        if(dp[i][buy]!=-1)
        {
            return dp[i][buy];
        }
        if(buy)
        {
            return dp[i][buy]=max(-prices[i]+solve(i+1,0,prices),solve(i+1,1,prices));
        }
        return dp[i][buy]=max(prices[i]-fee+solve(i+1,1,prices),solve(i+1,0,prices));
    }
    int maxProfit(vector<int>& prices,int fee) {
        this->fee=fee;
        memset(dp,-1,sizeof(dp));
        return max(-prices[0]+solve(1,0,prices),solve(1,1,prices));
    }
};