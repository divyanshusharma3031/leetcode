class Solution {
public:
     map<pair<int,int>,int> mpp;
    int n=0;
    int m=0;
    void dfs(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &vis,int c)
    {
        if(i<0 || j<0 || i>=n || j>=n || vis[i][j] || grid[i][j]==0)
        {
            return;
        }
        vis[i][j]=1;
        mpp[{i,j}]=c;
        dfs(i+1,j,grid,vis,c);
        dfs(i-1,j,grid,vis,c);
        dfs(i,j-1,grid,vis,c);
        dfs(i,j+1,grid,vis,c);
    }
    vector<vector<int>> solve(int c)
    {
        // cout<<n<<" "<<m<<"\n";
        vector<vector<int>> region1(n,vector<int>(m,1e9));
        queue<array<int,3>> q;
        vector<vector<int>> vis1(n+1,vector<int>(n+1,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mpp[{i,j}]==c)
                {
                    q.push({i,j,0});
                    vis1[i][j]=1;
                }
            }
        }
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int i=it[0];
            int j=it[1];
            int c=it[2];
            vis1[i][j]=1;
            region1[i][j]=c;
            if((i+1)<n && !vis1[i+1][j])
            {
                q.push({i+1,j,c+1});
                vis1[i+1][j]=1;
            }
            
            if((i-1)>=0 && !vis1[i-1][j])
            {
                
                q.push({i-1,j,c+1});
                vis1[i-1][j]=1;
            }
            if((j+1)<n && !vis1[i][j+1])
            {
                q.push({i,j+1,c+1});
                vis1[i][j+1]=1;
            }
            if((j-1)>=0 && !vis1[i][j-1])
            {
                
                q.push({i,j-1,c+1});
                vis1[i][j-1]=1;
            }
        }
        return region1;
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        this->n=n;
        this->m=n;
        vector<vector<int>> vis(m,vector<int>(n,0));
        int c=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                mpp[{i,j}]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]==1)
                {
                    // cout<<i<<" "<<j<<"\n";
                    dfs(i,j,grid,vis,c);
                    c++;
                }
            }
        }
        
        vector<vector<int>> region1=solve(1);
        vector<vector<int>> region2=solve(2);
        int ans=1e9;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                    ans=min(ans,(region1[i][j]+region2[i][j]-1));
                }
            }
        }
        return ans;
    }
};
// 0 1 0
// 0 0 0
// 0 0 1