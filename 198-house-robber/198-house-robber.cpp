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
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        vector<int> dp(nums.size()+1,-1);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
};