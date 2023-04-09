#include <functional>
template <typename T>
    std::vector<T> operator+(const std::vector<T>& a, const std::vector<T>& b)
    {
        vector<T> result(a.size());
        for(int i=0;i<a.size();i++)
        {
            result[i]=a[i]+b[i];
        }
        return result;
    }
class Solution {
public:
    
    unordered_map<int,char> mpp;
    unordered_map<int,vector<int>> dp;
    vector<int> dfs(int node,vector<int> adj[],vector<int> &vis)
    {
        if(vis[node])
        {
            return dp[node];
        }
        vis[node]=1;
        vector<int> count(26,0);
        count[mpp[node]-'a']++;
        int mx=0;
        vector<int> mxcount=count;
        for(auto it:adj[node])
        {
            vector<int> newcount=count+dfs(it,adj,vis);
            int nmx=0;
            for(int i=0;i<26;i++)
            {
                mxcount[i]=max(mxcount[i],newcount[i]);
            }
        }
        return dp[node]=mxcount;
    }
    bool isCyclic(int node,vector<int> adj[],vector<int> &vis,vector<int> &dfsvis)
    {
        vis[node]=1;
        dfsvis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(isCyclic(it,adj,vis,dfsvis))
                {
                    return true;
                }
            }
            else if(dfsvis[it])
            {
                return true;
            }
        }
        dfsvis[node]=0;
        return false;
    }
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n=colors.size();
        vector<int> adj[n+1];
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        vector<int> vis(n+1,0);
        vector<int> dfsvis(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(isCyclic(i,adj,vis,dfsvis))
            {
                return -1;
            }
        }
        for(int i=0;i<n;i+=1)
        {
            vis[i]=0;
            dfsvis[i]=0;
            mpp[i]=colors[i];
        }
        int mx=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                vector<int> count=dfs(i,adj,vis);
                for(auto it:count)
                {
                    mx=max(mx,it);
                }
            }
        }
       
        return mx;
    }
};