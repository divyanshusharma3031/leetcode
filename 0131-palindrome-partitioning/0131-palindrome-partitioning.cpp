class Solution {
public:
    vector<vector<string>> ans;
    bool palindrome(string &s)
    {
        int i=0;
        int j=s.size()-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void dfs(int i,string &s,vector<string> &v)
    {
        int n=s.size();
        if(i>=n)
        {
            ans.push_back(v);
            return;
        }
        for(int idx=i;idx<n;idx++)
        {
            string w=s.substr(i,idx-i+1);
            if(palindrome(w))
            {
                v.push_back(w);
                dfs(idx+1,s,v);
                v.pop_back();
            }
        }
        return ;
    }
    vector<vector<string>> partition(string s) {
        if(s.size()==0)
        {
            return ans;
        }
        vector<string> v;
        dfs(0,s,v);
        return ans;
    }
};