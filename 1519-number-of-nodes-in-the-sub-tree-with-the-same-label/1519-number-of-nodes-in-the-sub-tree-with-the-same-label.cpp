class Solution {
public:
    map<int,int> mpp;
    vector<int> ans;
    void dfs(int node,vector<int> adj[],vector<int> &vis,string &labels,vector<int> &count)
    {
        if(vis[node])
        {
            return;
        }
        vis[node]=1;
        
        for(auto it:adj[node])
        {
            vector<int> c(26,0);
             dfs(it,adj,vis,labels,c);
             for(int j=0;j<26;j++)
             {
                 count[j]+=c[j];
             }
        }
        ans[node]=++count[labels[node]-'a'];
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<int> adj[n+1];
        for(auto it:edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        ans.resize(n,0);
        vector<int> vis(n,0);
        vector<int> count(26,0);
        dfs(0,adj,vis,labels,count);
        return ans;
    }
};