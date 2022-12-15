class Solution {
public:
    vector<int> dp;
    int robbing(int i,vector<int> &nums)
    {
        if(i<=0)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        return dp[i]=max(nums[i-1]+robbing(i-2,nums),robbing(i-1,nums));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n+1,-1);
        return robbing(n,nums);
    }
};