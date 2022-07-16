class Solution {
public:
    void dfs(int i,vector<int> &vis,vector<int> adj[])
    {
        vis[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                dfs(it,vis,adj);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int> adj[n+1];
        set<int> s;
        for(int i=0;i<connections.size();i++)
        {
            s.insert(connections[i][0]);
            s.insert(connections[i][1]);
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        int c=0;
        vector<int> vis(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adj);
                c++;
            }
        }
        int neededwires=s.size()-1;
        int rem=connections.size()-neededwires;
        // cout<<c<<"\n";
        if(c==1)
        {
            return 0;
        }
        c--;
        int ans=rem-c;
        if(ans<0)
        {
            return -1;
        }
        return c;
    }
};