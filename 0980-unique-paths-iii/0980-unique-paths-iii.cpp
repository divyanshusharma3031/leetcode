class Solution {
public:
    typedef vector<int> vi;
    int ans=0;
    int tb=0;
    void travel(int i,int j,vector<vi> &grid,set<int> &s,vector<vi> &vis)
    {
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || j<0 || i>=m || j>=n || vis[i][j] || grid[i][j]==-1)
        {
            return;
        }
        if(grid[i][j]==2)
        {
            // s.insert(i*n+j);
            if(s.size()==tb)
            {
                ans++;
            }
            // s.erase(i*n+j);
            return;
        }
        vis[i][j]=1;
        s.insert(i*n+j);
        travel(i+1,j,grid,s,vis);
        travel(i-1,j,grid,s,vis);
        travel(i,j+1,grid,s,vis);
        travel(i,j-1,grid,s,vis);
        s.erase(i*n+j);
        vis[i][j]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        set<int> s;
        int m=grid.size();
        int n=grid[0].size();
        vector<vi> vis(m,vi(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                    tb++;
                }
            }
        }
        tb++;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                    travel(i,j,grid,s,vis);
                // break;
            }
        }
        return ans;
    }
};