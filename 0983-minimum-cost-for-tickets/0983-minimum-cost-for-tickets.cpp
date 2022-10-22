class Solution {
public:
    int dp[366][367];
    int solve(int i,int freepass,vector<int>& days, vector<int>& costs)
    {
        int n=days.size();
        if(i>=n)
        {
            return 0;
        }
        if(dp[i][freepass]!=-1)
        {
            return dp[i][freepass];
        }
        if(freepass>=days[i])
        {
            return dp[i][freepass]=solve(i+1,freepass,days,costs);
        }
        return dp[i][freepass]=min({costs[0]+solve(i+1,days[i],days,costs),costs[1]+solve(i+1,min(days[i]+6,366),days,costs),costs[2]+solve(i+1,min(days[i]+29,366),days,costs)});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        memset(dp,-1,sizeof(dp));
        int n=days.size();
        int m=costs.size();
        sort(days.begin(),days.end());
        return min({costs[0]+solve(1,days[0],days,costs),costs[1]+solve(1,days[0]+6,days,costs),costs[2]+solve(1,days[0]+29,days,costs)});
    }
};