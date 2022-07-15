class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j,vector<vector<int>> &vis)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || i>=n || j<0 || j>=m || vis[i][j])
        {
            return ;
        }
        vis[i][j]=1;
        if(grid[i][j]=='0')
        {
            return;
        }
        vis[i][j]=1;
        dfs(grid,i+1,j,vis);
        dfs(grid,i-1,j,vis);
        dfs(grid,i,j+1,vis);
        dfs(grid,i,j-1,vis);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        vector<vector<int>> vis(n+1,vector<int>(m+1,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' && vis[i][j]==0)
                {
                    dfs(grid,i,j,vis);
                    c++;
                }
            }
        }
        return c;
    }
};