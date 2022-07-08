class Solution {
public:
    vector<vector<vector<int>>> dp;
    int mincost(int i,vector<int>& houses,vector<vector<int>>& cost,int m,int n,int target,int c)
    {
        if(target<0)
        {
            return 1e9;
        }
        if(i==m)
        {
            if(target==0)
            {
                return 0;
            }
            return 1e9;
        }
        if(dp[i][target][c]!=-1)
        {
            return dp[i][target][c];
        }
        int mn=1e9;
        if(houses[i]==0)
        {
            for(int j=0;j<n;j++)
            {
                int steps=0;
                if(c==(j+1))
                {
                    steps=cost[i][j]+mincost(i+1,houses,cost,m,n,target,c);
                }
                else
                {
                    steps=cost[i][j]+mincost(i+1,houses,cost,m,n,target-1,j+1);
                }
                mn=min(mn,steps);
            }
        }
        else
        {
            int steps=0;
            if(c==houses[i])
            {
                steps=mincost(i+1,houses,cost,m,n,target,c);
            }
            else
            {
                steps=mincost(i+1,houses,cost,m,n,target-1,houses[i]);
            }
            mn=min(mn,steps);
        }
        
        return dp[i][target][c]=mn;
    }
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        int mn=1e9;
        int c=0;
        dp.resize(m+1,vector<vector<int>>(target+1,vector<int>(n+1,-1)));
        for(int i=0;i<n;i++)
        {
            int steps=1e9;
            if(houses[0]==0)
            {
                steps=cost[0][i]+mincost(1,houses,cost,m,n,target-1,i+1);
            }
            else
            {
                steps=mincost(1,houses,cost,m,n,target-1,houses[0]);
            }
            mn=min(mn,steps);
        }
        if(mn>=1e9)
        {
            return -1;
        }
        return mn;
        
    }
};