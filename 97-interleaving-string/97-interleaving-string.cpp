class Solution {
public:
    vector<vector<int>> dp;
    bool interleave(string &s1,string &s2,string &s3,int i,int j,int k)
    {
        if(i==0 && j==0 && k==0)
        {
            return dp[i][j]=true;
        }
        if(k==0)
        {
            return false;
        }
        if(dp[i][j]!=-1)
        {
            return false;
        }
        if(i>0 && s1[i-1]==s3[k-1] && j>0 && s2[j-1]==s3[k-1])
        {
            return dp[i][j]=interleave(s1,s2,s3,i,j-1,k-1)||interleave(s1,s2,s3,i-1,j,k-1);
        }
        if(i>0 && s1[i-1]==s3[k-1])
        {
            return dp[i][j]=interleave(s1,s2,s3,i-1,j,k-1);
        }
        if(j>0 && s2[j-1]==s3[k-1])
        {
            return dp[i][j]=interleave(s1,s2,s3,i,j-1,k-1);
        }
        return dp[i][j]=false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int i=s1.length();
        int j=s2.length();
        int k=s3.length();
        dp.resize(i+1,vector<int>(j+1,-1));
        return interleave(s1,s2,s3,i,j,k);
    }
};