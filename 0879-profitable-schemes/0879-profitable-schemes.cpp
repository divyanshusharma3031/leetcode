
class Solution {
public:
    int dp[101][101][1201];
    const int mod=1e9+7;
    int solve(int i,int n,vector<int> &group,vector<int> &profit,int minProfit)
    {
        int x=group.size();
        if(i>=x)
        {
            return n>=0 && minProfit<=0;
        }
        if(n<0)
        {
            return 0ll;
        }
        if(dp[i][n][minProfit+1100]!=-1)
        {
            return dp[i][n][minProfit+1100];
        }
        long long curr=0;
        curr=(curr+solve(i+1,n-group[i],group,profit,minProfit-profit[i]))%mod;
        curr=(curr+solve(i+1,n,group,profit,minProfit))%mod;
        return dp[i][n][minProfit+1100]=curr;
    }
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        // wt=n
        memset(dp,-1,sizeof(dp));
        vector<pair<int,int>> v;
        for(int i=0;i<group.size();i++)
        {
            v.push_back({group[i],profit[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<group.size();i++)
        {
            group[i]=v[i].first;
            profit[i]=v[i].second;
        }
        return solve(0,n,group,profit,minProfit);
    }
};