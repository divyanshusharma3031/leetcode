class Solution {
public:
    vector<vector<int>> dp;
    int maxi(int i,int c,int n,vector<int>& slices)
    {
        if(c==0)
        {
            return 0;
        }
        if(i>=n)
        {
            return 0;
        }
        if(i==(n-1))
        {
            return slices[i];
        }
        if(dp[i][c]!=-1)
        {
            return dp[i][c];
        }
        int p1=maxi(i+1,c,n,slices);
        int p2=slices[i]+maxi(i+2,c-1,n,slices);
        return dp[i][c]=max(p1,p2);
    }
    int maxSizeSlices(vector<int>& slices) {
        int n=slices.size();
        dp.resize(n+1,vector<int>(n/3+1,-1));
        int p1=maxi(0,n/3,n-1,slices);
        dp.clear();
        dp.resize(n+1,vector<int>(n/3+1,-1));
        int p2=maxi(1,n/3,n,slices);
        return max(p1,p2);
    }
};