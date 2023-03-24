class Solution {
public:
    unordered_map<int,set<int>> out;
    unordered_map<int,set<int>> in;
    int ans=0;
    void dfs(int node)
    {
        for(auto it:out[node])
        {
            ans++;
            in[it].erase(node);
            dfs(it);
        }
        for(auto it:in[node])
        {
            out[it].erase(node);
            dfs(it);
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        for(int i=0;i<connections.size();i++)
        {
            out[connections[i][0]].insert(connections[i][1]);
            in[connections[i][1]].insert(connections[i][0]);
        }
        dfs(0);
        return ans;
    }
};