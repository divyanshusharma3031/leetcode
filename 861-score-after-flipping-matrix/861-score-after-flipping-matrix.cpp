class Solution {
public:
    int binaryToDecimal(vector<int> n)
    {
        vector<int> num = n;
        int dec_value = 0;
        int base = 1;

        int len = num.size();
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] == 1)
                dec_value += base;
            base = base * 2;
        }
        return dec_value;
    }
    int matrixScore(vector<vector<int>>& grid) {
        
        int m=grid.size();
        
        int n=grid[0].size();
        
        for(int i=0;i<m;i++)
        {
            if(grid[i][0]==0)
            {
                for(int j=0;j<n;j++)
                {
                    if(grid[i][j]==0)
                    {
                        grid[i][j]=1;
                    }
                    else
                    {
                        grid[i][j]=0;
                    }
                }
            }
        }
        vector<int> col(n,0);
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<m;j++)
            {
                if(grid[j][i]==1)
                {
                    c++;
                }
            }
            int ze=m-c;
            // cout<<ze<<"\n";
            if(ze>c)
            {
                col[i]=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(col[i]==1)
            {
                for(int j=0;j<m;j++)
                {
                    if(grid[j][i]==0)
                    {
                        grid[j][i]=1;
                    }
                    else
                    {
                        grid[j][i]=0;
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++)
        {
            int a=binaryToDecimal(grid[i]);
            ans=ans+a;
        }
        return ans;
    }
};