class Solution {
public:
    void parent(int node,vector<int> par[],vector<int> &a,vector<int> &vis)
    {
        for(auto i:par[node])
        {
            if(vis[i])
            {
                continue;
            }
            a.push_back(i);
            vis[i]=1;
            parent(i,par,a,vis);
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        vector<int> par[n];
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            for(auto j:adj[i])
            {
                par[j].push_back(i);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            vector<int> vis(n,0);
            parent(i,par,v,vis);
            ans.push_back(v);
        }
        for(int i=0;i<n;i++)
        {
            sort(ans[i].begin(),ans[i].end());
        }
        return ans;
    }
};