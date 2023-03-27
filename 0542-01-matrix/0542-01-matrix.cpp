class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> ans(m,vector<int>(n,1e9));
        vector<vector<int>> vis(m,vector<int>(n,0));
        queue<array<int,3>> q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    q.push({i,j,0});
                    vis[i][j]=1;
                }
            }
        }
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int i=it[0];
            int j=it[1];
            ans[i][j]=min(ans[i][j],it[2]);
            if((i+1)<m && vis[i+1][j]==0)
            {
                vis[i+1][j]=1;
                q.push({i+1,j,it[2]+1});
            }
            if((i-1)>=0 && vis[i-1][j]==0)
            {
                vis[i-1][j]=1;
                q.push({i-1,j,it[2]+1});
            }
            if((j+1)<n && vis[i][j+1]==0)
            {
                vis[i][j+1]=1;
                q.push({i,j+1,it[2]+1});
            }
            if((j-1)>=0 && vis[i][j-1]==0)
            {
                vis[i][j-1]=1;
                q.push({i,j-1,it[2]+1});
            }
        }
        return ans;
    }
};