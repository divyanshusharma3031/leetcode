class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> adj[n+1];
        for(int i=0;i<dislikes.size();i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        vector<int> color(n+1,-1);
        vector<int> vis(n+1,0);
        int c=0;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                queue<int> q;
                q.push(i);
                vis[i]=1;
                color[i]=c;
                while(!q.empty())
                {
                    int x=q.front();
                    q.pop();
                    for(auto it:adj[x])
                    {
                        if(vis[it]==0)
                        {
                            vis[it]=1;
                            q.push(it);
                            if(color[x]==1)
                            {
                                color[it]=0;
                            }
                            else
                            {
                                color[it]=1;
                            }
                        }
                        else
                        {
                            if(color[it]==color[x])
                            {
                                // cout<<it<<" "<<x<<"\n";
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};