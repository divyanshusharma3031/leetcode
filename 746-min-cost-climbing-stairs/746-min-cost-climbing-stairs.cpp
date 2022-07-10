class Solution {
public:
    vector<int> dp;
    int mincost(vector<int> &cost,int idx)
    {
        int n=cost.size();
        if(idx>=n)
        {
            return 0;
        }
        if(dp[idx]!=-1)
        {
            return dp[idx];
        }
        return dp[idx]=min(cost[idx]+mincost(cost,idx+1),cost[idx]+mincost(cost,idx+2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int mn=INT_MAX;
        int n=cost.size();
        dp.resize(n+1,-1);
        for(int i=0;i<2;i++)
        {
            mn=min({mn,cost[i]+mincost(cost,i+1),cost[i]+mincost(cost,i+2)});
        }
        return mn;
    }
};