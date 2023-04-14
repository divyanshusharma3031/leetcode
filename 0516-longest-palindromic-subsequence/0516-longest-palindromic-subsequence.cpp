class Solution {
public:
    vector<vector<int>> dp;
    int lcs(int n,int m,string &str,string &s)
    {
       if(n==0 || m==0)
       {
           return 0;
       }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        if(str[n-1]==s[m-1])
        {
            return dp[n][m]=1+lcs(n-1,m-1,str,s);
        }
        return dp[n][m]=max({lcs(n-1,m,str,s),lcs(n,m-1,str,s),lcs(n-1,m-1,str,s)});
    }
    int longestPalindromeSubseq(string s) {
        string str=s;
        int n=s.size();
        reverse(str.begin(),str.end());
        dp.resize(n+1,vector<int>(n+1,-1));
        return lcs(s.size(),str.size(),s,str);
    }
};