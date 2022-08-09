class Solution {
public:
    const int mod=1e9+7;
    long long ans=-1;
    void maxpro(int i,int j,vector<vector<int>>& grid,long long x)
    {
        if(grid[i][j]==0)
        {
            ans=max(ans,0LL);
            return;
        }
        int n=grid.size();
        int m=grid[0].size();

        if(i==n-1 && j==m-1)
        {
            ans=max(ans,(x*grid[i][j]));
            return;
        }
        long long y=(x*grid[i][j]);
        if((i+1)<n)
        {
            maxpro(i+1,j,grid,y);
        }
        if((j+1)<m)
            maxpro(i,j+1,grid,y);
    }
    int maxProductPath(vector<vector<int>>& grid) {
        ans=-1;
        maxpro(0,0,grid,1);
        if(ans<0)
        {
            return -1;
        }
        return ans%mod;
    }
};