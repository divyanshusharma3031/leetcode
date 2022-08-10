class Solution {
public:
    const int mod=1e9+7;
    typedef long long ll;
    vector<vector<vector<int>>> dp;
    vector<vector<int>> cnt;
    bool validcut(int r1,int c1,int r2,int c2)
    {
        return cnt[r2][c2] - cnt[r1-1][c2] - cnt[r2][c1-1] + cnt[r1-1][c1-1];
    }
    int countways(int i,int j,vector<string>& pizza, int k)
    {
        ll ans=0;
        int n=pizza.size();
        int m=pizza[0].size();
        if(k==1)
        {
            return validcut(i,j,n,m);
        }
        if(i>n || j>m)
        {
            return false;
        }
        if(dp[i][j][k]!=-1)
        {
            return dp[i][j][k];
        }
        for(int idx=i;idx<n;idx++)
        {
            if(validcut(i,j,idx,m))
            {
                ans=(ans+countways(idx+1,j,pizza,k-1))%mod;
            }
        }
        for(int c=j;c<m;c++)
        {
            if(validcut(i,j,n,c))
            {
                ans=(ans+countways(i,c+1,pizza,k-1))%mod;
            }
        }
        return dp[i][j][k]=ans;
    }
    int ways(vector<string>& pizza, int k) {
        int n=pizza.size();
        int m=pizza[0].size();
        dp.resize(n+1,vector<vector<int>>(m+1,vector<int>(k+1,-1)));
        cnt.resize(n+1,vector<int>(m+1,0));
         for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)
            {
                cnt[i][j] = cnt[i-1][j]+(pizza[i-1][j-1]=='A');
            }
        }
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)
            {
                cnt[i][j] += cnt[i][j-1];
            }   
        }
        return countways(1,1,pizza,k);
    }
};