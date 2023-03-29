class Solution {
public:
    vector<vector<int>> dist={{-1,0},{1,0},{0,1},{0,-1}};
    int orangesRotting(vector<vector<int>>& grid) {
        queue<array<int,3>> q;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j,0});
                    vis[i][j]=1;
                }
            }
        }
        vector<vector<int>> ans(grid.size(),vector<int>(grid[0].size(),1e9));
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int i=it[0];
            int j=it[1];
            int c=it[2];
            ans[i][j]=min(ans[i][j],c);
            for(auto it:dist)
            {
                int x=i+it[0];
                int y=j+it[1];
                if(x>=0 && x<n && y>=0 && y<m && vis[x][y]==0 && grid[x][y]!=0)
                {
                    q.push({x,y,c+1});
                    vis[x][y]=1;
                }
            }
        }
        int a=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2 || grid[i][j]==1)
                {
                    a=max(a,ans[i][j]);
                }
            }
        }
        if(a==1e9)
        {
            return -1;
        }
        return a;
    }
};