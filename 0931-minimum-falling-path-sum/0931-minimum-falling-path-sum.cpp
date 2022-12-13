class Solution {
public:
    vector<vector<int>> dp;
    int minsum(vector<vector<int>> &matrix,int i,int j)
    {
        int m=matrix[0].size();
        if(j<0)
        {
            return INT_MAX-1231412;
        }
        if(j>=m)
        {
            return INT_MAX-1231124;
        }
        int n=matrix.size();
        if(i==(n-1))
        {
            return matrix[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int ans=INT_MAX;
            dp[i][j]=ans=min(ans,matrix[i][j]+min({minsum(matrix,i+1,j),minsum(matrix,i+1,j+1),minsum(matrix,i+1,j-1)}));
        return ans;
    }
       int minFallingPathSum(vector<vector<int>>& matrix) {
        
        
        int m=matrix[0].size();
        
        int n=matrix.size();
        
        if(n==1)
        {
            int mn=INT_MAX;
            
            for(int i=0;i<m;i++)
            {
                mn=min(mn,matrix[0][i]);
            }
            return mn;
        }
        
        int ans=INT_MAX;
        
        dp.resize(n+1,vector<int>(m+1,-1));
        
        for(int i=0;i<m;i++)
        {
            ans=min(ans,matrix[0][i]+min({minsum(matrix,1,i),minsum(matrix,1,i+1),minsum(matrix,1,i-1)}));
        }
        
        return ans;    
    }
};