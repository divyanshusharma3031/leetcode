class Solution {
public:
    void dfs(int i,int j,vector<vector<int>> &grid1,vector<vector<int>> &grid2,vector<vector<int>> &vis,bool &b)
    {
        int m=grid1.size();
        int n=grid1[0].size();
        if(i<0 || j<0 || i>=m || j>=n || vis[i][j] || grid2[i][j]==0)
        {
            return;
        }
        vis[i][j]=1;
        if(grid1[i][j]==0)
        {
            b=false;
        }
        dfs(i+1,j,grid1,grid2,vis,b);
        dfs(i-1,j,grid1,grid2,vis,b);
        dfs(i,j+1,grid1,grid2,vis,b);
        dfs(i,j-1,grid1,grid2,vis,b);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m=grid1.size();
        int n=grid1[0].size();
        int c=0;
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!vis[i][j] && grid2[i][j]==1)
                {
                    bool b=true;
                    dfs(i,j,grid1,grid2,vis,b);
                    if(b)
                    {
                        c++;
                    }
                }
            }
        }
        return c;
    }
};