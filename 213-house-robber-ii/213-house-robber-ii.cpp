class Solution {
public:
    int robbing(int lo,int hi,vector<int> &nums,vector<int> &dp)
    {
        if(hi<lo)
        {
            return 0;
        }
        if(hi==lo)
        {
            return nums[hi];
        }
        if(dp[hi]!=-1){
            return dp[hi];
        }
        return dp[hi]=max(nums[hi]+robbing(lo,hi-2,nums,dp),robbing(lo,hi-1,nums,dp));
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        int n=nums.size();
        if(n==1)
        {
            return nums[0];   
        }
        int x=robbing(0,n-2,nums,dp);
        vector<int> dp2(nums.size()+1,-1);
        int y=robbing(1,n-1,nums,dp2);
        return max(x,y);
    }
};