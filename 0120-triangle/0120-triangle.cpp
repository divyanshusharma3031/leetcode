class Solution
{
public:
    int helper(vector<vector<int>> &triangle, int triangle_index, int index, int **dp)
    {
        if (triangle_index >= triangle.size())
        {
            return 0;
        }
        // cout<<triangle_index<<" "<<index<<" ";
        if (dp[triangle_index][index] != -1)
        {
            return dp[triangle_index][index];
        }
        return dp[triangle_index][index] = triangle[triangle_index][index] + min(helper(triangle, triangle_index + 1, index + 1, dp), helper(triangle, triangle_index + 1, index, dp));
    }

    int minimumTotal(vector<vector<int>> &triangle)
    {
        int **dp = new int *[triangle.size() + 1];
        for (int i = 0; i < triangle.size(); i++)
        {
            dp[i] = new int[i + 2];
            for(int j=0;j<i+2;j++)
            {
                dp[i][j]=-1;
            }
        }
        // cout<<dp[0][0]<<" ";
        return helper(triangle, 0, 0, dp);
    }
};