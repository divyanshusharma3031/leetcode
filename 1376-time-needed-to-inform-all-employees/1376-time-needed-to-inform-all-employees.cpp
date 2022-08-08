class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> adj[n];
        for(int i=0;i<manager.size();i++)
        {
            if(manager[i]==-1)
            {
                continue;
            }
            adj[manager[i]].push_back(i);
        }
        int ans=0;
        queue<pair<int,int>> q;
        vector<int> vis(n+1,0);
        q.push({headID,informTime[headID]});
        vis[headID]=1;
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            for(auto i:adj[x.first])
            {
                if(!vis[i])
                {
                    vis[i]=1;
                    q.push({i,x.second+informTime[i]});
                    ans=max(ans,x.second+informTime[i]);
                }
            }
        }
        return ans;
    }
};