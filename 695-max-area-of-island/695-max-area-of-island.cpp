class Solution {
public:
    int dfs(int i,int j,vector<vector<int>> & grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0)
        {
            return 0;
        }
        grid[i][j]=0;
        int p1=dfs(i-1,j,grid);
        int p2=dfs(i+1,j,grid);
        int p3=dfs(i,j+1,grid);
        int p4=dfs(i,j-1,grid);
        return 1+p1+p2+p3+p4;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                {
                    ans=max(ans,dfs(i,j,grid));
                }
            }
        }
        return ans;
    }
};