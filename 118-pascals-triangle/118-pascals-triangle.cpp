class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int i=2;i<=numRows;i++)
        {
            vector<int> v;
            v.push_back(1);
            for(int j=2;j<=i-1;j++)
            {
                v.push_back(ans[i-2][j-1]+ans[i-2][j-2]);
            }
            v.push_back(1);
            ans.push_back(v);
        }
        return ans;
    }
};