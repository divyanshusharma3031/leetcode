class Solution {
public:
    vector<vector<int>> dp;
    int lis(vector<int> &nums,int i,int j)
    {
        int n=nums.size();
        if(i==n)
        {
            return 0;
        }
        if(j==-1)
        {
            if(dp[i][n+1]!=-1)
            {
                return dp[i][n+1];
            }
            return dp[i][n+1]=max(1+lis(nums,i+1,i),lis(nums,i+1,j));
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(nums[i]>nums[j])
        {
            return dp[i][j]=max(1+lis(nums,i+1,i),lis(nums,i+1,j));
        }
        return dp[i][j]=(lis(nums,i+1,j));
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n+1,vector<int>(n+2,0));
        for(int j=0;j<n+2;j++)
        {
            dp[n][j]=0;
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i-1;j>=-1;j--)
            {
                if(j==-1)
                {
                    dp[i][j+1]=max(1+dp[i+1][i+1],dp[i+1][j+1]);
                }
                else if(nums[i]>nums[j])
                {
                    dp[i][j+1]=max(1+dp[i+1][i+1],dp[i+1][j+1]);
                }
                else
                {
                    dp[i][j+1]=dp[i+1][j+1];
                }
            }
        }
        return dp[0][0];
    }
};