class Solution {
public:
    long long ans=0;
    int s=0;
    int dfs(int node,vector<int> adj[],vector<int> &vis)
    {
        if(vis[node])
        {
            return 0;
        }
        vis[node]=1;
        int c=1;
        for(auto it:adj[node])
        {
            c=c+dfs(it,adj,vis);
        }
        int d=ceil(c/(s/(1.0)));
        if(node!=0)
        {
            ans=ans+d;
        }
        return c;
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        s=seats;
        int n=roads.size();
        vector<int> vis(n+1,0);
        vector<int> adj[n+1];
        for(auto it:roads)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        dfs(0,adj,vis);
        return ans;
    }
};