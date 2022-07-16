class Solution {
public:
    int dir[5]={0,1,0,-1,0};
    int mod = 1e9+7;
    int dp[51][51][51];
    int dfs(int i, int j, int m, int n, int maxMove, vector<vector<bool>> &visited){
        if((i<0 || i>=m || j<0 || j>=n) && maxMove>=0) return 1;
        //if(visited[i][j]) return 0;
        if(maxMove<=0) return 0;
        //visited[i][j]=true;
        if(dp[i][j][maxMove]!=-1) return dp[i][j][maxMove];
        long long p=0;
        for(int kj=0;kj<4;kj++){
            int x = i + dir[kj];
            int y = j + dir[kj+1];
            p+=dfs(x,y,m,n,maxMove-1,visited)%mod;
        }
        return dp[i][j][maxMove] = p%mod;
        
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<bool>> visited(m,vector<bool>(n,false));
         memset(dp,-1,sizeof(dp));
        return dfs(startRow, startColumn, m,n,maxMove,visited);
    }
};