class Solution {
public:
    int mergeStones(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)
        {
            return 0;
        }
        if((n-1)%(k-1))
        {
            return -1;
        }
        vector<int> cum(n+1,0);
        for(int i=0;i<n;i++)
        {
            cum[i+1]=cum[i]+nums[i];
        }
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int l=k-1;l<n;l++)
        {
            for(int x=0,y=x+l;x<n && y<n;x++,y++)
            {
                if(l==k-1)
                {
                    dp[x][y]=cum[y+1]-cum[x];
                }
                else
                {
                    dp[x][y]=INT_MAX;
                    for(int mid=x;mid<y;mid+=k-1)
                    {
                        dp[x][y]=min(dp[x][y],dp[x][mid]+dp[mid+1][y]);
                    }
                    if(l%(k-1)==0)
                    {
                        dp[x][y]=dp[x][y]+cum[y+1]-cum[x];
                    }
                }
            }
            
        }
        return dp[0][n-1];
    }
};