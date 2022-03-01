class Solution {
public:
    bool dfs(int source,int target,vector<int> &path,vector<vector<int>> &ans,vector<vector<int>> &graph,vector<int> &vis)
    {
        vis[source]=1;
        path.push_back(source);
        if(source==target)
        {
            return true;
        }
        for(int y:graph[source])
        {
            if(dfs(y,target,path,ans,graph,vis))
            {
                ans.push_back(path);
                path.pop_back();
            }
        }
        if(!path.empty())
        {
            path.pop_back();
        }
        return false;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        int n=graph.size();
        vector<int> vis(n,0);
        dfs(0,n-1,path,ans,graph,vis);
        cout<<ans.size()<<"\n";
        return ans;
    }
};