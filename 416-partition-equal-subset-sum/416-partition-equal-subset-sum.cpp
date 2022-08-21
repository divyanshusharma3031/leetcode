class Solution {
public:
    vector<vector<int>> dp;
    bool find(int n,vector<int> &nums,int target)
    {
        if(target==0)
        {
            return dp[n][target]=true;
        }
        if(target<0)
        {
            return false;
        }
        if(n==0)
        {
            return false;
        }
        if(dp[n][target]!=-1)
        {
            return dp[n][target];
        }
        return dp[n][target]=find(n-1,nums,target-nums[n-1])|| find(n-1,nums,target);
    }
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s=s+nums[i];
        }
        if(s%2)
        {
            return false;
        }
        int target=s/2;
        int n=nums.size();
        dp.resize(n+1,vector<int>(target+1,-1));
        return find(nums.size(),nums,target);
    }
};