class Solution {
public:
    vector<int> dp;
    int combisum(vector<int>& nums, int target)
    {
        int n=nums.size();
        if(target==0)
        {
            return 1;
        }
        if(target<0)
        {
            return 0;
        }
        if(dp[target]!=-1)
        {
            return dp[target];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans+combisum(nums,target-nums[i]);
        }
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        dp.resize(target+1,-1);
        return combisum(nums,target);
    }
};