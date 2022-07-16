class Solution {
public:
    bool dfs(int i,vector<int> adj[],vector<int> &vis,vector<int> &dfsvis)
    {
        vis[i]=1;
        dfsvis[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                if(dfs(it,adj,vis,dfsvis))
                {
                    return true;
                }
            }
            else if(dfsvis[it])
            {
                return true;
            }
        }
        dfsvis[i]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<int> adj[n+1];
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int> vis(n+1,0);
        vector<int> dfsvis(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,adj,vis,dfsvis))
                {
                    return false;
                }
            }
        }
        return true;
    }
};