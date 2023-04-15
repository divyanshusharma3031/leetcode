class Solution {
public:
    vector<vector<int>> dp;
    int solve(int i,vector<vector<int>> & piles,int k)
    {
        if(k<=0)
        {
            return 0;
        }
        if(i>=piles.size())
        {
            return 0;
        }
        if(dp[i][k]!=-1)
        {
            return dp[i][k];
        }
        int ans=0;
        for(int j=0;j<piles[i].size();j++)
        {
            if((k-j)>=0)
            {
                ans=max(ans,piles[i][j]+solve(i+1,piles,k-j));
            }
        }
        return dp[i][k]=ans;
    }
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        dp.resize(piles.size()+2,vector<int>(k+1,-1));
        vector<vector<int>> pref;
        for(int i=0;i<piles.size();i++)
        {
            vector<int> temp(piles[i].size()+1,0);
            for(int j=1;j<=piles[i].size();j++)
            {
                temp[j]=temp[j-1]+piles[i][j-1];
            }
            pref.push_back(temp);
        }
        return solve(0,pref,k);
    }
};