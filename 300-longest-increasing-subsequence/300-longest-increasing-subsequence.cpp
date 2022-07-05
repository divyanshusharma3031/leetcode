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
        dp.resize(n+1,vector<int>(n+2,-1));
        return lis(nums,0,-1);
    }
};