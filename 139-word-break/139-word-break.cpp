class Solution {
public:
    vector<int> dp;
    bool wordbreak(string &s,unordered_set<string> &dict,int i)
    {
        int n=s.size();
        if(i==n)
        {
            return 1;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        string sub="";
        for(int j=i;j<n;j++)
        {
            sub+=s[j];
            if((dict.count(sub)) && wordbreak(s,dict,j+1))
            {
                return dp[i]=true;
            }
        }
        return dp[i]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict;
        int n=wordDict.size();
        dp.resize(s.size()+1,-1);
        for(int i=0;i<n;i++)
        {
            dict.insert(wordDict[i]);
        }
        return wordbreak(s,dict,0);
    }
};