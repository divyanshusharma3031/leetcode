class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        // check bipartite
        vector<int> adj[n+1];
        for(int i=0;i<dislikes.size();i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        int m=dislikes.size();
        
        vector<int> color(n+1,-1);
       
        for(int i=1;i<=n;i++)
        {
            if(color[i]==-1)
            {
                queue<int> q;
                q.push(i);
                color[i]=1;
                while(!q.empty())
                {
                    int t=q.front();
                    q.pop();
                    for(auto it:adj[t])
                    {
                        if(color[it]==-1)
                        {
                            color[it]=1-color[t];
                            q.push(it);
                        }
                        else if(color[it]==color[t])
                        {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
// 32
// 1->2
// 1->3
// 2->4
