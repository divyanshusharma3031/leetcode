class Solution {
public:
    int timer=1;
    void dfs(int node,int parent,vector<int> adj[],vector<int> &vis,vector<int> &time,vector<int> &low,vector<vector<int>> &ans)
    {
        // cout<<node<<" ";
        vis[node]=1;
        time[node]=low[node]=timer;
        timer++;
        for(auto it:adj[node])
        {
            if(it==parent)
            {
                //do nothing
                continue;
            }
            if(vis[it]==0)
            {
                dfs(it,node,adj,vis,time,low,ans);
                low[node]=min(low[it],low[node]);
                if(low[it]>time[node])
                {
                    ans.push_back({it,node});
                }
            }
            else
            {
                low[node]=min(low[node],low[it]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        //tarjan's algorithm
        vector<vector<int>> ans;
        vector<int> vis(n+1,0);
        vector<int> low(n+1,1e9);
        vector<int> time(n+1,0);
        vector<int> adj[n+1];
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        dfs(0,-1,adj,vis,time,low,ans);
        return ans;
    }
};