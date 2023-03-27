class Solution {
public:
    int dp[201][201];
    int minsum(int i,int j,vector<vector<int>> &grid,int n,int m)
    {
        // cout<<n<<" "<<m<<"\n";
        if(i==(n-1) && j==(m-1))
        {
            return grid[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(i==n-1)
        {
            return dp[i][j]=grid[i][j]+minsum(i,j+1,grid,n,m);
        }
        if(j==m-1)
        {
            return dp[i][j]=grid[i][j]+minsum(i+1,j,grid,n,m);
        }
        return dp[i][j]=grid[i][j]+min(minsum(i+1,j,grid,n,m),minsum(i,j+1,grid,n,m));
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof dp);
        return minsum(0,0,grid,grid.size(),grid[0].size());
    }
};