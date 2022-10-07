class Solution {
public:
    const int mod=1e9+7;
    int dp[31][31][1001];
    int combo(int n,int k,int target)
    {
        if(target<0 || n<0)
        {
            return 0;
        }
        if(target==0)
        {
            return n==0;
        }
        if(dp[n][k][target]!=-1)
        {
            return dp[n][k][target];
        }
        int ans=0;
        for(int i=1;i<=k;i++)
        {
            ans=(ans+combo(n-1,k,target-i))%mod;
        }
        return dp[n][k][target]=ans;
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return combo(n,k,target);
    }
};