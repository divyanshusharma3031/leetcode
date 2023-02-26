class Solution {
public:
    vector<vector<int>> dp;
    int editdistance(int n,int m,string word1,string word2)
    {
       if(n==0 && m==0)
       {
           return 0;
       }
        if(n==0)
        {
            return m;
        }
        if(m==0)
        {
            return n;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        if(word1[n-1]==word2[m-1])
        {
            return dp[n][m]=editdistance(n-1,m-1,word1,word2);
        }
        return dp[n][m]=min({1+editdistance(n,m-1,word1,word2),1+editdistance(n-1,m,word1,word2),1+editdistance(n-1,m-1,word1,word2)});
    }
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        dp.resize(n+1,vector<int>(m+1,-1));
        return editdistance(n,m,word1,word2);
    }
};