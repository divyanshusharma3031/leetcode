class Solution {
public:
    int mn=1e9;
    int dfs(int node,vector<int> adj[],vector<int> &vis,vector<bool> &hasApple)
    {
        if(vis[node])
        {
            return 0;
        }
        vis[node]=1;
        int ans=0;
        int c=0;
        if(hasApple[node])
        {
            c=c+2;
        }
        for(auto it:adj[node])
        {
            ans=ans+dfs(it,adj,vis,hasApple);
        }
        if(c==0 && ans!=0)
        {
            c=2;
        }
        // cout<<node<<" "<<c<<"\n";
        return c+ans;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<int> adj[n+1];
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n,0);
        int ans=dfs(0,adj,vis,hasApple);
        if(ans==0)
        {
            return 0;
        }
        return ans-2;
    }
};