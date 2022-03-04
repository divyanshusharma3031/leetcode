class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<matrix[i].size();j++)
            {
                if(matrix[i][j])
                {
                   matrix[i][j]=min({matrix[i-1][j],matrix[i][j-1],matrix[i-1][j-1]})+1;
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                ans+=matrix[i][j];
            }
        }
        return ans;
    }
};