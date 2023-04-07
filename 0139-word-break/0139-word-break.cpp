class Solution {
public:
    unordered_map<string,int> mpp;
    int dp[301];
    bool solve(int i,string &s)
    {
        int n=s.size();
        if(i>=n)
        {
            return true;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        string sub="";
        bool b=false;
        for(int idx=i;idx<n;idx++)
        {
            sub+=s[idx];
            if(b)
            {
                return dp[i]=true;
            }
            if(mpp[sub])
            {
                b=b|solve(idx+1,s);
            }
        }
        return dp[i]=b;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        for(auto it:wordDict)
        {
            mpp[it]++;
        }
        memset(dp,-1,sizeof(dp));
        return solve(0,s);
    }
};