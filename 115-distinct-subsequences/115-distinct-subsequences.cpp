class Solution {
public:
    
    int numDistinct(string s, string t) {
        
//      Space optimised approach   
        
        vector<long long> dp(t.length()+1,0);
        int n=s.length();
        int m=t.length();
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
            vector<long long> temp(m+1,0);
            temp[0]=1;
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    temp[j]=(dp[j-1]+dp[j])%INT_MAX;
                }
                else
                {
                    temp[j]=dp[j];
                }
            }
            dp=temp;
        }
        return dp[m];
    }
};