class Solution {
public:
    int ans=1e9;
    void dfs(int node,vector<pair<int,int>> adj[],vector<int> &vis,int dist)
    {
        ans=min(ans,dist);
        if(vis[node])
        {
            return;
        }
        vis[node]=1;
        for(auto it:adj[node])
        {
            dfs(it.first,adj,vis,it.second);
        }
        return;
    }
    int minScore(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>> adj[n+1];
        for(auto it:roads)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        vector<int> vis(n+1,0);
        for(auto it:adj[1])
        {
            dfs(it.first,adj,vis,it.second);
        }
        return ans;
    }
};