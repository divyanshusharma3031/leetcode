class Solution {
public:
    vector<vector<int>> dp;
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
         dp.resize(s.length()+1,vector<int>(t.length()+1,-1));
        return distinct(s.length(),t.length(),s,t);
        
    }
};