class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>> v;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    v.push_back({i,j});
                }
            }
        }
        int i=0;
        while(i<v.size())
        {
            int x=v[i].first;
            int y=v[i].second;
            for(int j=0;j<n;j++)
            {
                if(matrix[x][j])
                {
                    matrix[x][j]=0;
                }
            }
            for(int j=0;j<m;j++)
            {
                if(matrix[j][y])
                {
                    matrix[j][y]=0;
                }
            }
            i++;
        }
    }
};