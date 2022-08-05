class Solution {
public:
    vector<vector<int>> dp;
    int mndiffi(int i,vector<int>& job, int d)
    {
        if(d<0)
        {
            return 1e9;
        }
        int n=job.size();
        if(i==n)
        {
            if(d==0)
            {
                return 0;
            }
            return 1e9;
        }
        if(dp[i][d]!=-1)
        {
            return dp[i][d];
        }
        int mn=1e9;
        int mx=job[i];
        for(int j=i;j<n;j++)
        {
            mx=max(mx,job[j]);
            mn=min(mn,mx+mndiffi(j+1,job,d-1));
        }
        return dp[i][d]=mn;
    }
    int minDifficulty(vector<int>& job, int d) {
        int n=job.size();
        dp.resize(n+1,vector<int>(d+1,-1));
        if(n<d)
        {
            return -1;
        }

        return mndiffi(0,job,d);
    }
};