class Solution {
public:
    int editdistance(int n,int m,string s1,string s2,vector<vector<int>> &dp)
    {
        // cout<<n<<" "<<m<<"\n";
        if((n-1)<0 && (m-1)<0)
        {
            // cout<<"1\n";
            return 0;
        }
        if((n-1)<0)
        {
            // cout<<m<<"\n";
            return 1+editdistance(n,m-1,s1,s2,dp);
        }
        if((m-1)<0)
        {
            // cout<<n<<"\n";
            return 1+editdistance(n-1,m,s1,s2,dp);
        }
        if(dp[n][m])
        {
            return dp[n][m];
        }
        if(s1[n-1]==s2[m-1])
        {
           return dp[n][m]=editdistance(n-1,m-1,s1,s2,dp);
        }
        // cout<<dp[n][m]<<"\n";
        return dp[n][m]=1+min({editdistance(n-1,m,s1,s2,dp),editdistance(n,m-1,s1,s2,dp),editdistance(n-1,m-1,s1,s2,dp)});
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size()+1,vector<int>(word2.size()+1,0));
       return editdistance(word1.length(),word2.length(),word1,word2,dp);
    }
};