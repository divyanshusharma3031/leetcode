class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> vis(edges.size()+2,0);
        for(auto i:edges)
        {
            for(int j:i)
            {
                vis[j]++;
            }
        }
        int mn=INT_MIN;
        int idx=-1;
        int n=edges.size()+1;
        for(int i=1;i<=n;i++)
        {
            if(mn<vis[i])
            {
                mn=vis[i];
                idx=i;
            }
        }
        return idx;
    }
};