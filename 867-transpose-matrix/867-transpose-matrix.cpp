class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        if(n==m)
        {
             for(int i=0;i<n;i++)
            {
                for(int j=0;j<i;j++)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
            return matrix;
        }
        vector<vector<int>> newmatrix(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                newmatrix[i][j]=matrix[j][i];
            }
        }
        return newmatrix;
    }
};