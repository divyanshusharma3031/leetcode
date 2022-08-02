class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int c=1;
        int r1=0;
        int r2=n-1;
        int c1=0;
        int c2=n-1;
        int x=n*n;
        vector<vector<int>> matrix(n,vector<int>(n,0));
        while(c<=x)
        {
            for(int i=c1;i<=c2;i++)
            {
                matrix[r1][i]=c;
                c++;
            }
            r1++;
            for(int i=r1;i<=r2;i++)
            {
                matrix[i][c2]=c;
                c++;
            }
            c2--;
            for(int i=c2;i>=c1;i--)
            {
                matrix[r2][i]=c;
                c++;
            }
            r2--;
            for(int i=r2;i>=r1;i--)
            {
                matrix[i][c1]=c;
                c++;
            }
            c1++;
        }
        return matrix;
    }
};