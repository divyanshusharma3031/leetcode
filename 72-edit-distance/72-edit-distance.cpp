class Solution {
public:
    int editdist(int n,int m,string &word1,string &word2,vector<vector<int>> &dp)
    {
        if(n==0 && m==0)
        {
            return 0;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        if(n==0)
        {
            return dp[n][m]=1+editdist(n,m-1,word1,word2,dp);
        }
        if(m==0)
        {
            return dp[n][m]=1+editdist(n-1,m,word1,word2,dp);
        }
        if(word1[n-1]==word2[m-1])
        {
            return dp[n][m]=editdist(n-1,m-1,word1,word2,dp);
        }
        return dp[n][m]=1+min({editdist(n-1,m,word1,word2,dp),editdist(n,m-1,word1,word2,dp),editdist(n-1,m-1,word1,word2,dp)});
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size()+1,vector<int>(word2.size()+1,-1));
        return editdist(word1.size(),word2.size(),word1,word2,dp);
    }
};