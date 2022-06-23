class Solution {
public:
    const int mod=INT_MAX;
    long long ways(long long n,long long m,vector<vector<int>> mat,vector<vector<long long>> &dp)
    {
        if(n<0 || m<0)
        {
            return 0;
        }
        if(n==0 && m==0)
        {
            if(mat[n][m]!=1)
                return 1;
            return 0;
        }
        if(mat[n][m]==1)
        {
            return 0;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        return dp[n][m]=((ways(n-1,m,mat,dp))%mod+(ways(n,m-1,mat,dp))%mod)%mod;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<long long>> dp(n+1,vector<long long>(m+1,-1));
        return ways(n-1,m-1,mat,dp);
    }
};