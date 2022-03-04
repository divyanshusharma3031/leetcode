class Solution {
public:
    int robbing(int n,vector<int> &nums,vector<int> &dp)
    {
        if(n<=0)
        {
            return 0;
        }
        if(n==1)
        {
            return nums[n-1];
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]=max(nums[n-1]+robbing(n-2,nums,dp),robbing(n-1,nums,dp));
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return robbing(nums.size(),nums,dp);
    }
};