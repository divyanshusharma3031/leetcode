class Solution {
public:
    vector<int> *arr;
    bool dfs(int node,vector<int> &vis,int destination)
    {
        vis[node]=1;
        if(node==destination)
        {
            return true;
        }
        for(auto i:arr[node])
        {
            if(!vis[i])
            {
                if(dfs(i,vis,destination))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        arr=new vector<int>[n];
        for(int i=0;i<edges.size();i++)
        {
            for(int j=0;j<edges[i].size()-1;j++)
            {
                arr[edges[i][j]].push_back(edges[i][j+1]);
                arr[edges[i][j+1]].push_back(edges[i][j]);
            }
        }
        vector<int> vis(n+1,0);
        return dfs(source,vis,destination);
    }
};