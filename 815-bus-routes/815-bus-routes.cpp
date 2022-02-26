class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        int mx=INT_MIN;
        for(int i=0;i<routes.size();i++)
        {
            for(int j:routes[i])
            {
                mx=max(mx,j);
            }
        }
        vector<int> adj[mx+1];
        for(int i=0;i<routes.size();i++)
        {
            for(int j:routes[i])
            {
                adj[j].push_back(i);
            }
        }
        
        queue<pair<int,int>> q;
        
        q.push({source,0});
        
        vector<int> vis(1e5+1,0);
        
        while(!q.empty())
        {
            int stop=q.front().first;
            int distance=q.front().second;
            q.pop();
            if(stop==target)
            {
                return distance;
            }
            for(auto i:adj[stop])
            {
                for(int j:routes[i])
                {
                  if(!vis[j])
                    {
                        vis[j]=1;
                        q.push({j,distance+1});     
                    }   
                }
                 routes[i].clear();             
            }
            
        }
        return -1;
    }
};