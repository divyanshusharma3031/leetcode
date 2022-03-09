class Solution {
public:
    int dp[201][201]={};
    int minsum(int i,int j,vector<vector<int>> &arr)
    {
        if(j<0 || j>(arr[i].size()-1))
        {
            return 123456;
        }
        if((i==(arr.size()-1)))
        {
            return arr[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j]=min(arr[i][j]+minsum(i+1,j,arr),arr[i][j]+minsum(i+1,j+1,arr));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof dp);
        return minsum(0,0,triangle);
    }
};