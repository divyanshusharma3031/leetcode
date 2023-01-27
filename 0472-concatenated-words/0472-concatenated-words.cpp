class Solution {
public:
    unordered_map<string,int> mpp;
    unordered_map<string,int> dp;
    bool solve(int i,string prev,string &w)
    {
        int n=w.size();
        if(i==n && prev!=w)
        {
            return mpp[prev];
        }
        if(i==n)
        {
            return false;
        }
        string s=to_string(i)+" "+prev;
        if(dp.find(s)!=dp.end())
        {
            return dp[s];
        }
        prev+=w[i];
        if(mpp[prev] && prev!=w)
        {
            return dp[s]=solve(i+1,prev,w)||solve(i+1,"",w);
        }
        return dp[s]=solve(i+1,prev,w);
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        sort(words.begin(),words.end(),[&](string &w1,string w2){
            return w1.size()<w2.size();
        });
        vector<string> ans;
        for(auto it:words)
        {
            mpp[it]++;
        }
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            dp.clear();
            if(solve(0,"",words[i]))
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};