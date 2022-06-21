class Solution {
public:
    vector<vector<int>> dp;
    int calc(int n,int egg)
    {
        if(n<=1)
        {
            return 1;
        }
        if(egg==1)
        {
            return n;
        }
        if(dp[n][egg]!=-1)
        {
            return dp[n][egg];
        }
        int ans=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            ans=min(ans,max(calc(i-1,egg-1),calc(n-i,egg))+1);
        }
        return dp[n][egg]=ans;
    }
    int twoEggDrop(int n) {
        dp.resize(n+1,vector<int>(3,-1));
        return calc(n,2);
    }
};