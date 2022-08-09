class Solution {
public:
    int n;
    int m;
    int element(int i,int j,vector<vector<int>>& mat)
    {
        if(i<0 || j<0)
        {
            return 0;
        }
        if(i>=n)
        {
            i=n-1;
        }
        if(j>=m)
        {
            j=m-1;
        }
        return mat[i][j];
    }
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
//        prefix sum in 2d matrix;
        
        n=mat.size();
        
        m=mat[0].size();
        
        // vector<vector<int>> mat(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mat[i][j]=mat[i][j]+element(i-1,j,mat)+element(i,j-1,mat)-element(i-1,j-1,mat);
            }
        }
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[i][j]=element(i+k,j+k,mat)-element(i+k,j-k-1,mat)-element(i-k-1,j+k,mat)+element(i-k-1,j-k-1,mat);
            }
        }
        
        return ans;
    }
};