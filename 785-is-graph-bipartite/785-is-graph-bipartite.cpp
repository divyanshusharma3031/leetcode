class Solution {
public:
    bool bipar(vector<vector<int>> graph,vector<int> &color)
    {
        queue<int> q;
        // color[0]=0;
        for(int j=0;j<graph.size();j++)
        {
            q.push(j);
            if(color[j]==-1)
            {
                
                color[j]=0;
                while(!q.empty())
                {
                    cout<<j<<'\n';
                    int x=q.front();
                    q.pop();
                    vector<int> y=graph[x];
                    for(int i=0;i<y.size();i++)
                    {
                        // cout<<graph[x][i]<<" "<<color[graph[x][i]]<<"\n";
                        if(color[graph[x][i]]!=-1)
                        {
                            // cout<<x<<" "<<color[x]<<" "<<graph[x][i]<<" "<<color[graph[x][i]]<<"\n"; 
                            if(color[x]==color[graph[x][i]])
                            {
                                return false;
                            }
                        }
                        else
                        {
                            q.push(graph[x][i]);
                            if(color[x]==0)
                            {
                                color[graph[x][i]]=1;
                            }
                            else
                            {
                                color[graph[x][i]]=0;
                            }
                        }
                    }
                 }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);
        return bipar(graph,color);
    }
};