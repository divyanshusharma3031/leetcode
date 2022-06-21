class Solution {
public:
    vector<vector<int>> dp;
    int calc(vector<int>&piles,int lo,int hi,int s1,bool b)
    {
        if(lo>hi)
        {
            return 0;
        }
        if(dp[lo][hi]!=-1)
        {
            return dp[lo][hi];
        }
        if(b)
        {
            return dp[lo][hi]=max(piles[lo]+calc(piles,lo+1,hi,s1,!b),piles[hi]+calc(piles,lo,hi-1,s1,!b));
        }
        return dp[lo][hi]=max(calc(piles,lo+1,hi,s1,!b),calc(piles,lo,hi-1,s1,!b));
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        dp.resize(n+1,vector<int>(n+1,-1));
        int lo=0;
        int hi=n-1;
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=piles[i];
        }
        int a1=calc(piles,lo,hi,0,true);
        int a2=s-a1;
        return a1>a2;
    }
};