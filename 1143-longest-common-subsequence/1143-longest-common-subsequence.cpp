class Solution {
public:
    int lcs(string &text1,string &text2,int n,int m,vector<vector<int>> &dp)
    {
        if(n==0 || m==0)
        {
            return 0;
        }
        if(text1[n-1]==text2[m-1])
        {
            return dp[n][m]=1+lcs(text1,text2,n-1,m-1,dp);
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        return dp[n][m]=max(lcs(text1,text2,n-1,m,dp),lcs(text1,text2,n,m-1,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=m;i++)
        {
            dp[0][i]=0;
        }
        for(int i=0;i<=n;i++)
        {
            dp[n][0]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
//         printing lcs
        string s="";
        int i=n;
        int j=m;
        while(i>0 && j>0)
        {
            if(text1[i-1]==text2[j-1])
            {
                s+=text1[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
        reverse(s.begin(),s.end());
        cout<<s<<"\n";
        return dp[n][m];
    }
};