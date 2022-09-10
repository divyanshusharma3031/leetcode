class Solution {
public:
    const int mod=1e9+7;
    int dp[1001][1001][2];
    int ways(int i,int n,int k,int start)
    {
       
        if(i>=n)
        {
            return 0;
        }
          if(k==0)
        {
            return 1;
        }
        if(dp[i][k][start]!=-1)
        {
            return dp[i][k][start];
        }
        long long ans=0;
        if(start)
        {
            ans=(ans+ways(i+1,n,k,0))%mod;
            ans=(ans+ways(i+1,n,k,1))%mod;
        }
        else
        {
            ans=(ans+ways(i,n,k-1,1))%mod;
            ans=(ans+ways(i+1,n,k,0))%mod;
        }
        return dp[i][k][start]=ans%mod;
    }
    int numberOfSets(int n, int k) {
        // point 0 to n-1 tak hi hai 
//         k line segments
        memset(dp,-1,sizeof(dp));
        return ways(0,n,k,1)%mod;
    }
};