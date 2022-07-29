class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        map<char,char> mpp;
        map<char,int> vis;
        int n=words.size();
        int m=pattern.length();
        for(int i=0;i<n;i++)
        {
            string s=words[i];
            for(int j=0;j<m;j++)
            {
                if(vis[pattern[j]])
                {
                    // mpp[s[j]]=s[j];
                    continue;
                }
                mpp[s[j]]=pattern[j];
                vis[pattern[j]]++;
            }
            for(int j=0;j<m;j++)
            {
                s[j]=mpp[s[j]];
            }
            // cout<<s<<"\n";
            mpp.clear();
            vis.clear();
            if(s==pattern)
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};