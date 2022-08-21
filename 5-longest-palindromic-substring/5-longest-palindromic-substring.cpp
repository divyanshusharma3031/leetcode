class Solution {
public:
    string longestPalindrome(string s) {
        string ans=s.substr(0,1);
        int n=s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=0;i<=n;i++)
        {
            dp[i][i]=1;
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    if((j-i)==1 || dp[i+1][j-1])
                    {
                        dp[i][j]=1;
                        if((j-i+1)>ans.size())
                            ans=s.substr(i,j-i+1);
                    }
                }
            }
        }
        return ans;
    }
};