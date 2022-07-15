class Solution {
public:
    vector<int> dp;
    int combos(int i,string s)
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
        int ans=0;
        int op1=s[i]-'0';
        if(op1>0)
        {
            ans=ans+combos(i+1,s);
        }
        int op2=0;
        if(i<n-1)
        {
            op2=op1*10+s[i+1]-'0';
        }
        if(op1!=0 && op2>0 && op2<=26)
        {
            ans=ans+combos(i+2,s);
        }
        return dp[i]=ans;
    }
    int numDecodings(string s) {
        int i=0;
        int n=s.size();
        dp.resize(n+1,-1);
        return combos(0,s);
    }
};