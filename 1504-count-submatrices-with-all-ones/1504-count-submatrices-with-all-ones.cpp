class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<m;i++)
        {
            int s=0;
            for(int j=n-1;j>=0;j--)
            {
                if(mat[i][j]==1)
                {
                    s++;
                }
                else
                {
                    s=0;
                }
                mat[i][j]=s;
            }
        }
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int mn=1e9;
                for(int x=i;x<m;x++)
                {
                    mn=min(mn,mat[x][j]);
                    ans=ans+mn;
                }
            }
        }
        return ans;
    }
};