class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int r1=0;
        int c1=0;
        int r2=matrix.size()-1;
        int c2=matrix[0].size()-1;
        int n=matrix.size();
        int m=matrix[0].size();
        while(ans.size()!=n*m)
        {
            for(int i=c1;i<=c2;i++)
            {
                ans.push_back(matrix[r1][i]);
            }
            if(ans.size()>=(n*m))
            {
                return ans;
            }
            r1++;
            for(int i=r1;i<=r2;i++)
            {
                ans.push_back(matrix[i][c2]);
            }
            if(ans.size()>=(n*m))
            {
                return ans;
            }
            c2--;
            for(int i=c2;i>=c1;i--)
            {
                ans.push_back(matrix[r2][i]);
            }
            if(ans.size()>=(n*m))
            {
                return ans;
            }
            r2--;
            for(int i=r2;i>=r1;i--)
            {
                ans.push_back(matrix[i][c1]);
            }
            if(ans.size()>=(n*m))
            {
                return ans;
            }
            c1++;
        }
        return ans;
    }
};