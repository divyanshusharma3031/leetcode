class Solution {
public:
    
    long long minjump(vector<int> &nums,vector<int> &dp,int i)
    {
        
        if(i>=(nums.size()-1))
        {
            // dp[i]=0;
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        // cout<<i<<"\n";
        int idx=1;
        long long mn=INT_MAX;
        while(idx<=nums[i])
        {
            
            mn=min(mn,1+minjump(nums,dp,i+idx));
            idx++;
        }
        return dp[i]=mn;
    }
    int jump(vector<int>& nums) {
        int n=nums.size()-1;
        if(nums.size()==1)
        {
            return 0;
        }
        vector<int> dp(n+2,-1);
        minjump(nums,dp,0);
        return dp[0];
    }
};