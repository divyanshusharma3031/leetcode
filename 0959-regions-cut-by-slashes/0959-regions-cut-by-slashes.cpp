class Solution {
public:
    typedef vector<vector<int>> vvi;
    void dfs(int i,int j,vvi &matrix,vvi & vis)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || matrix[i][j]==0)
        {
            return;
        }
        vis[i][j]=1;
        dfs(i+1,j,matrix,vis);
        dfs(i-1,j,matrix,vis);
        dfs(i,j+1,matrix,vis);
        dfs(i,j-1,matrix,vis);
    }
    int regionsBySlashes(vector<string>& grid) {
        int n=grid.size();
        vector<vector<int>> matrix(3*n,vector<int>(3*n,1));
        vector<vector<int>> vis(3*n+1,vector<int>(3*n+1,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int row=3*i;
                if(grid[i][j]=='/')
                {
                    int x=row;
                    int y=j*3+2;
                    int count=3;
                    while(count--)
                    {
                        matrix[x][y]=0;
                        x++;
                        y--;
                    }
                }
                else if(grid[i][j]=='\\')
                {
                    int x=row;
                    int y=j*3;
                    int count=3;
                    while(count--)
                    {
                        matrix[x][y]=0;
                        x++;
                        y++;
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<3*n;i++)
        {
            for(int j=0;j<3*n;j++)
            {
                if(!vis[i][j] && matrix[i][j]==1)
                {
                    dfs(i,j,matrix,vis);
                    ans++;
                }
            }
        }
        return ans;
    }
};