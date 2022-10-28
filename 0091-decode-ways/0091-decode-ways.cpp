class Solution {
public:
    int dp[1000];
    int decodes(int i,string &s)
    {
        int n=s.length();
        if(i>=n)
        {
            return 1;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int op1=s[i]-'0';
        int ans=0;
        if(op1>0)
        {
            ans=ans+decodes(i+1,s);
        }
        int op2=0;
        if(i<n-1)
        {
            op2=(s[i]-'0')*10+s[i+1]-'0';
        }
        if(op1!=0 && op2<=26 && op2>0)
        {
            ans=ans+decodes(i+2,s);
        }
        return dp[i]=ans;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        return decodes(0,s);
    }
};