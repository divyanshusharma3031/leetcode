class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> adj[26];
        unordered_set<int> st;
        for(int i=0;i<s.size();i++)
        {
            adj[s[i]-'a'].push_back(i);
            st.insert(i);
        }
        string ans="";
        for(int i=0;i<order.size();i++)
        {
            for(auto it:adj[order[i]-'a'])
            {
                ans+=s[it];
                st.erase(it);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(st.find(i)!=st.end())
            {
                ans+=s[i];
                st.erase(i);
            }
        }
        return ans;
    }
};