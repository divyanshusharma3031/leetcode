class Solution {
public:
    
    bool checkmid(int mid,vector<vector<int>>& d)
    {
        int n=d.size();
        int m=d[0].size();
        bool b=false;
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(i==n-1&&j==m-1) dp[i][j]=min(d[i][j],0);
                else if(i==n-1) dp[i][j]=min(dp[i][j+1]+d[i][j],0);
                else if(j==m-1) dp[i][j]=min(dp[i+1][j]+d[i][j],0);
                else dp[i][j]=min(max(dp[i+1][j],dp[i][j+1])+d[i][j],0);
            }
        }
        return (abs(dp[0][0])+1)<=mid;
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int n=dungeon.size();
        int m=dungeon[0].size();
        int lo=0;
        int hi=1e9;
        int ans=1e9;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(checkmid(mid,dungeon))
            {
                // cout<<mid<<"\n";
                ans=mid;
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return ans;
    }
};