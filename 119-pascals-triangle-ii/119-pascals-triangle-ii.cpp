class Solution {
public:
    int binomialCoeff(int n, int k)
    {
        int C[n + 1][k + 1];
        int i, j;

        // Calculate value of Binomial Coefficient
        // in bottom up manner
        for (i = 0; i <= n; i++) {
            for (j = 0; j <= min(i, k); j++) {
                // Base Cases
                if (j == 0 || j == i)
                    C[i][j] = 1;

                // Calculate value using previously
                // stored values
                else
                    C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }

        return C[n][k];
    }
 
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans(rowIndex+1,0);
        
        ans[0]=1;
        
        ans[rowIndex]=1;
        
        for(int i=1;i<rowIndex;i++)
        {
            ans[i]=binomialCoeff(rowIndex,i);
        }
        
        return ans;
        
        
    }
};