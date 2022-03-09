class Solution {
public:
    bool jump(int idx,vector<int> &nums,vector<int> &dp)
    {
        int n=nums.size();
        if(idx>=(n-1))
        {
            return dp[idx]=true;
        }
        if(nums[idx]==0)
        {
            return dp[idx]=false;
        }
        if(dp[idx]!=-1)
        {
            return dp[idx];
        }
        int i=1;
        while(i<=nums[idx])
        {
            if(jump(idx+i,nums,dp))
            {
                return dp[idx]=true;
            }
            i++;
        }
        return dp[idx]=false;
    }
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1)
        {
            return true;
        }
        int z=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                z++;
            }
        }
        if(z==0)
        {
            return true;
        }
        vector<int> dp(n+1,-1);
        return jump(0,nums,dp);
    }
};