class Solution {
public:
    int mincost(int start,int end,vector<int> cuts,int sizeofrod,vector<vector<int>> &dp)
    {
        int cost=INT_MAX;
        int ans=0;
        // cout<<start<<" "<<end<<"\n";
        if(dp[start][end]!=0)
        {
            return dp[start][end];
        }
        if(start>=end)
        {
            return 0;
        }
        if((end-start)==1)
        {
            return 0;
        }
        for(int i=start+1;i<end;i++)
        {
            // cout<<cuts[end]<<"\n";
            cost=min(cost,cuts[end]-cuts[start]+mincost(start,i,cuts,cuts[i]-start,dp)+mincost(i,end,cuts,end-cuts[i],dp));
            dp[start][end]=cost;
        }
        return cost;
    }
//     int bottomup(int n,vector<int> cuts)
//     {
//         vector<vector<int>> dp(n,vector<int>(n));
//         for(int i=2;i<n;i++)
//         {
            
//         }
//     }
    int minCost(int n, vector<int>& A) {
        A.push_back(0);
        A.push_back(n);
        sort(A.begin(), A.end());
        int k = A.size();
        vector<vector<int>> dp(k, vector<int>(k));
        for (int d = 2; d < k; ++d) {
            for (int i = 0; i < k - d; ++i) {
                dp[i][i + d] = 1e9;
                for (int m = i + 1; m < i + d; ++m) {
                    dp[i][i + d] = min(dp[i][i + d], dp[i][m] + dp[m][i + d] + A[i + d] - A[i]);
                }
            }
        }
        return dp[0][k - 1];
    }
};