class Solution {
public:
    vector<vector<long long>> dp;
    int distinct(int n,int m,string &s,string &t)
    {
        if(n==0 && m==0)
        {
            return 1;
        }
        if(m==0)
        {
            return 1;
        }
        if(n==0)
        {
            return 0;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        if(s[n-1]==t[m-1])
        {
            return dp[n][m]=distinct(n-1,m-1,s,t)+distinct(n-1,m,s,t);
        }
        return dp[n][m]=distinct(n-1,m,s,t);
    }
    int numDistinct(string s, string t) {
//         express everything in i & j
        dp.resize(s.length()+1,vector<long long>(t.length()+1,-1));
        int n=s.length();
        int m=t.length();
        for(int i=0;i<=m;i++)
        {
            dp[0][i]=0;
        }
        
        dp[0][0]=1;
        
        for(int i=1;i<=n;i++)
        {
            dp[i][0]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%INT_MAX;
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][m];
    }
};