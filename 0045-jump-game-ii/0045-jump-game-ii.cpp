class Solution {
public:
    int dp[10001];
    int solve(vector<int> &nums,int i)
    {
        int n=nums.size();
        if(i>=n)
        {
            return 1e9;
        }
        if(i==n-1)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int mx=1e9;
        for(int j=1;j<=nums[i];j++)
        {
            mx=min(mx,1+solve(nums,i+j));
        }
        return dp[i]=mx;
    }
    int jump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
    }
};