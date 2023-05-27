class Solution {
public:
    int dp[50001][2];
    int solve(int i,bool b,vector<int> &piles)
    {
        int n=piles.size();
        if(i>=n)
        {
            return 0ll;
        }
        int mn=1e9;
        int mx=-1e9;
        int s=0;
        if(dp[i][b]!=-1)
        {
            return dp[i][b];
        }
        for(int idx=i;idx<=min(i+2,n-1);idx++)
        {
            if(b)
            {
                s=s+piles[idx];
                mx=max(mx,s+solve(idx+1,false,piles));
            }
            else
            {
                mn=min(mn,solve(idx+1,true,piles));
            }
        }
        if(b)
        {
            return dp[i][b]=mx;
        }
        return dp[i][b]=mn;
    }
    string stoneGameIII(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        int n=piles.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            s=s+piles[i];
        }
        int alice=solve(0,true,piles);
        int bob=s-alice;
        if(alice>bob)
        {
            return "Alice";
        }
        else if(alice<bob)
        {
            return "Bob";
        }
        return "Tie";
    }
};