class Solution {
public:
    const int mod=1e9+7;
    long long dfs(int i,int j,vector<vector<vector<int>>> &vis,int moves,int m,int n)
    {
        if(i<0 || j<0 || i>=m || j>=n )
        {
            return 1;
        }
        if(moves==0)
        {
            return 0;
        }
        if(vis[i][j][moves]!=-1)
        {
            return vis[i][j][moves];
        }
        long long ans=(dfs(i+1,j,vis,moves-1,m,n)+dfs(i-1,j,vis,moves-1,m,n)+dfs(i,j+1,vis,moves-1,m,n)+dfs(i,j-1,vis,moves-1,m,n))%mod;
        return vis[i][j][moves]=ans;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> vis(m+1,vector<vector<int>>(n+1,vector<int>(maxMove+1,-1)));
        return dfs(startRow,startColumn,vis,maxMove,m,n);
    }
};