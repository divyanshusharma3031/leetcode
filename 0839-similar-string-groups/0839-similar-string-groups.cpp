class Solution {
public:
    set<string> s;
    bool check(string &s1,string &s2)
    {
        int c=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                c++;
            }
        }
        return c==0 || c==2;
    }
    void dfs(vector<string> &strs,string &prev)
    {
        s.insert(prev);
        for(auto it:strs)
        {
            if(s.find(it)==s.end() && check(it,prev))
            {
                dfs(strs,it);
            }
        }
    }
    int numSimilarGroups(vector<string>& strs) {
        int n=strs.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s.find(strs[i])==s.end())
            {
                c++;
                dfs(strs,strs[i]);
            }
        }
        return c;
    }
};