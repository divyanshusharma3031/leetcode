class Solution {
public:
    int ans=-1;
    void dfs(int node,vector<int> adj[],vector<int> &vis,unordered_map<int,int> &mpp,int c)
    {
        vis[node]=1;
        mpp[node]=c;
        // cout<<node<<" "<<c<<"\n";
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis,mpp,c+1);
            }
            else if(mpp[it])
            {
                // cout<<it<<" "<<mpp[it]<<" "<<c<<"\n";
                ans=max(ans,c-mpp[it]+1);
            }
        }
        mpp[node]=0;
    }
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<int> vis(n+1,0);
        vector<int> adj[n+1];
        for(int i=0;i<n;i++)
        {
            if(edges[i]!=-1)
                adj[i].push_back(edges[i]);
        }
        for(int i=0;i<n;i++)
        {
            unordered_map<int,int> mpp;
            int c=1;
            dfs(i,adj,vis,mpp,c);
        }
        return ans;
    }
};