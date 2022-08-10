class Solution {
public:
    int dp[100001][3][4];
    const int mod=1e9+7;
    int check(int n,int a,int l)
    {
        if(l==0)
        {
            return 0;
        }
        if(a==0)
        {
            return 0;
        }
        if(n==0)
        {
            return 1;
        }
        if(dp[n][a][l]!=-1)
        {
            return dp[n][a][l];
        }
        long long p1=check(n-1,a,3);
        long long p2=check(n-1,a-1,3);
        long long p3=check(n-1,a,l-1);
        return dp[n][a][l]=(p1+p2+p3)%mod;
    }
    int checkRecord(int n) {
        memset(dp,-1,sizeof dp);
        int a=2;
        int l=3;
        return check(n,a,l);
    }
};