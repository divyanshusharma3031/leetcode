class Solution {
public:
    long long dfs(int node,vector<int> adj[],vector<int> &vis)
    {
        // cout<<node<<" ";
        if(vis[node])
        {
            return 0;
        }
        vis[node]=1;
        int c=1;
        for(auto it:adj[node])
        {
            c+=dfs(it,adj,vis);
        }
        return c;
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> vis(n+1,0);
        vector<int> adj[n+2];
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                long long c=dfs(i,adj,vis);
                // cout<<c<<"\n";
                ans=ans+c*(n-c);
            }
        }
        return ans/2;
    }
};