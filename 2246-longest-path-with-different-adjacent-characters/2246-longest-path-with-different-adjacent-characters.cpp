class Solution {
public:
    int mxl=0;
    vector<int> vis;
    int travel(int node,vector<int> adj[],string &s,char prev)
    {
        if(vis[node])
        {
            return 0;
        }
        vis[node]=1;
        int b1=0;
        int b2=0;
        for(auto it:adj[node])
        {
            int curr=travel(it,adj,s,s[it]);
            if(s[it]==prev)
            {
                continue;
            }
            if(curr>b2)
            {
                b2=curr;
            }
            if(b2>b1)
            {
                swap(b2,b1);
            }
        }
        mxl=max(mxl,b1+b2+1);
        return b1+1;
    }
    int longestPath(vector<int>& parent, string s) {
        int n=s.size();
        vector<int> adj[n+1];
        for(int i=1;i<n;i++)
        {
            adj[parent[i]].push_back(i);
            adj[i].push_back(parent[i]);
        }
        vis.resize(n,0);
        travel(0,adj,s,s[0]);
        return mxl;
    }
};