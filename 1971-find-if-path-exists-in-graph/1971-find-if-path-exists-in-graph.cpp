class Solution {
public:
    bool dfs(int node,vector<int> (arr[]),vector<int> &vis,int destination)
    {
        vis[node]=1;
        if(node==destination)
        {
            return true;
        }
        for(auto i:arr[node])
        {
            if(!vis[i])
            {
                if(dfs(i,arr,vis,destination))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        for(int i=0;i<edges.size();i++)
        {
            for(int j=0;j<edges[i].size()-1;j++)
            {
                adj[edges[i][j]].push_back(edges[i][j+1]);
                adj[edges[i][j+1]].push_back(edges[i][j]);
            }
        }
        vector<int> vis(n+1,0);
        return dfs(source,adj,vis,destination);
    }
};