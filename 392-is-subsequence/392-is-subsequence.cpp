class Solution {
public:
    vector<vector<int>> dp;
    bool checksub(int n,int m,string s,string t)
    {
        if(n==0)
        {
            return true;
        }
        if(m==0)
        {
            return false;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        if(s[n-1]==t[m-1])
        {
            return dp[n][m]=checksub(n-1,m-1,s,t);
        }
        return dp[n][m]=checksub(n,m-1,s,t);
    }
    bool isSubsequence(string s, string t) {
        vector<vector<int>> arr(s.length()+1,vector<int>(t.length()+1,-1));
        dp=arr;
       return checksub(s.length(),t.length(),s,t); 
    }
};