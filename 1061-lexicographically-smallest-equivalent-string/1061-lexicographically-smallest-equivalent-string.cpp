class Solution {
public:
    void dfs(int node,vector<int> adj[],vector<int> &vis,set<int> &s)
    {
        if(vis[node])
        {
            return;
        }
        s.insert(node);
        vis[node]=1;
        for(auto it:adj[node])
        {
            dfs(it,adj,vis,s);
        }
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<int> adj[26];
        for(int i=0;i<s1.size();i++)
        {
            adj[s1[i]-'a'].push_back(s2[i]-'a');
            adj[s2[i]-'a'].push_back(s1[i]-'a');
        }
        vector<int> vis(26,0);
        map<int,int> mpp;
        for(int i=0;i<26;i++)
        {
            mpp[i]=i;
        }
        for(int i=0;i<26;i++)
        {
            set<int> s;
            if(vis[i])
            {
                continue;
            }
            dfs(i,adj,vis,s);
            for(auto it:s)
            {
                mpp[it]=min(*s.begin(),mpp[it]);
            }
        }
        for(int i=0;i<baseStr.size();i++)
        {
            baseStr[i]=min(baseStr[i]-'a',mpp[baseStr[i]-'a'])+'a';
        }
        return baseStr;
    }
};