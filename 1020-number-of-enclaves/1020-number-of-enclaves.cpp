class Solution {
public:
    int c=0;
    void dfs(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &vis)
    {
        int m=grid.size();
        int n=grid[0].size();
        // cout<<i<<" "<<j<<"\n";
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 || vis[i][j])
        {
            // cout<<i<<" "<<j<<" "<<grid[i][j]<<"\n";
            return;
        }
        c--;
        vis[i][j]=1;
        dfs(i+1,j,grid,vis);
        dfs(i-1,j,grid,vis);
        dfs(i,j+1,grid,vis);
        dfs(i,j-1,grid,vis);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                // cout<<i<<" "<<j<<" "<<grid[i][j]<<"\n";
                if(grid[i][j]==1)
                {
                    c++;
                }
            }
        }
        vector<vector<int>> vis(m+1,vector<int>(n+1,0));
        for(int i=0;i<n;i++)
        {
            if(grid[0][i]==1)
            {
                if(!vis[0][i])
                {
                    dfs(0,i,grid,vis);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(grid[m-1][i]==1)
            {
                if(!vis[m-1][i])
                {
                    dfs(m-1,i,grid,vis);
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            if(grid[i][0]==1)
            {
                if(!vis[i][0])
                {
                    dfs(i,0,grid,vis);
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            if(grid[i][n-1]==1)
            {
                if(!vis[i][n-1])
                {
                    dfs(i,n-1,grid,vis);
                }
            }
        }
        return c;
    }
};