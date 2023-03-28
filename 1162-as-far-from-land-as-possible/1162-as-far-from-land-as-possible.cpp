class Solution {
public:
    vector<vector<int>> dist={{-1,0},{1,0},{0,1},{0,-1}};
    int maxDistance(vector<vector<int>>& grid) {
        queue<array<int,3>> q;
        int n=grid.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j,0});
                    vis[i][j]=1;
                }
            }
        }
        vector<vector<int>> ans(n,vector<int>(n,1e9));
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
                if(x>=0 && x<n && y>=0 && y<n && vis[x][y]==0)
                {
                    q.push({x,y,c+1});
                    vis[x][y]=1;
                }
            }
        }
        int a=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                    a=max(a,ans[i][j]);
                }
            }
        }
        if(a==(1e9))
        {
            return -1;
        }
        return a;
    }
};