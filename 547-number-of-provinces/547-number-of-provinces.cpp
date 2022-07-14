class Solution {
public:
    vector<int> vis;
    void dfs(int root,vector<int> adj[],int n)
    {
        // cout<<root<<" ";
        vis[root]=1;
        for(auto it:adj[root])
        {
            if(!vis[it])
            {
                dfs(it,adj,n);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        
        vector<int> adj[n+1];
        
        int m=isConnected[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(isConnected[i][j] && i!=j)
                    adj[i+1].push_back(j+1);
            }
        }
        vis.resize(n+1,0);
        int c=0;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,n);
                cout<<"\n";
                c++;
            }
        }
        return c;
    }
};