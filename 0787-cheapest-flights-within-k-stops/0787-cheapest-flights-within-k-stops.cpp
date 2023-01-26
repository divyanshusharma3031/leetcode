class Solution {
public:
    typedef pair<int,int> pi;
    typedef pair<int,pi> ppi;
    int dp[101][101];
    int cheapest(int src,int dst,vector<pi> adj[],int k)
    {
        if(k<0)
        {
            return 1e9;
        }
           if(src==dst)
           {
               return 0;
           }
        if(dp[src][k]!=-1)
        {
            return dp[src][k];
        }
        int mn=1e9;
        for(auto it:adj[src])
        {
            mn=min(mn,it.second+cheapest(it.first,dst,adj,k-1));
        }
        return dp[src][k]=mn;
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pi> adj[n];
        for(int i=0;i<flights.size();i++)
        {
            pi p=make_pair(flights[i][1],flights[i][2]);
            adj[flights[i][0]].push_back(p);
        }
        memset(dp,-1,sizeof(dp));
        int ans=cheapest(src,dst,adj,k+1);
        if(ans==1e9)
        {
            return -1;
        }
        return ans;
    }
};