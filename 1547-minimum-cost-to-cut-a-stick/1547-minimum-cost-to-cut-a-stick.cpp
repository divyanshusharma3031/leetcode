class Solution {
public:
    int dp[103][103];
    int mincost(int start,int end,vector<int> &cuts,int l,int r)
    {
        if(start>end || end>=cuts.size() || start<0)
        {
            return 0;
        }
        if(start==end)
        {
            return r-l;
        }
        int cost=INT_MAX;
        int ans=0;
        if((dp[start][end])!=-1)
        {
            return dp[start][end];
        }
        for(int i=start;i<=end;i++)
        {
            cost=min(cost,r-l+mincost(start,i-1,cuts,l,cuts[i])+mincost(i+1,end,cuts,cuts[i],r));
        }
        dp[start][end]=cost;
        return cost;
    }
    int minCost(int n, vector<int>& cuts) {
        sort(cuts.begin(),cuts.end());
        memset(dp,-1,sizeof dp);
        return mincost(0,cuts.size()-1,cuts,0,n);
    }
};