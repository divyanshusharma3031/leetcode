class Solution {
public:
    void dfs(int i,int j,vector<vector<int>> &grid,bool &b)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(i>=n || j>=m || i<0 || j<0)
        {
            b=false;
            return;
        }
        if(grid[i][j]!=0)
        {
            return;
        }
        grid[i][j]=-1;//grid[i][j]=0 changes to visited;
        dfs(i+1,j,grid,b);
        dfs(i-1,j,grid,b);
        dfs(i,j+1,grid,b);
        dfs(i,j-1,grid,b);
        
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                    bool b=true;
                    dfs(i,j,grid,b);
                    // cout<<"\n";
                    if(b)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};