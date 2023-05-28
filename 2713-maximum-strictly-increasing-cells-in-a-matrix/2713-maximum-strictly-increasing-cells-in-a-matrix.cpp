class Solution {
public:
    int maxIncreasingCells(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        unordered_map<int,vector<vector<int>>> mpp;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mpp[-mat[i][j]].push_back({i,j});
                s.insert(-mat[i][j]);
            }
        }
        vector<vector<int>> temp(n, vector<int>(m,0));
        vector<int> row(n,0);
        vector<int> col(m,0);
        for(auto it:s)
        {
            for(auto x:mpp[it])
            {
                temp[x[0]][x[1]]=max(row[x[0]],col[x[1]])+1;
            }
            for(auto x:mpp[it])
            {
                row[x[0]]=max(row[x[0]],temp[x[0]][x[1]]);
                col[x[1]]=max(col[x[1]],temp[x[0]][x[1]]);
            }
        }
        return max(*max_element(row.begin(),row.end()),*max_element(col.begin(),col.end()));
    }
};