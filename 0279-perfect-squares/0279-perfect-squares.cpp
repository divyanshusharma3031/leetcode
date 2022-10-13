class Solution {
public:
    int possible(int n,int sum,vector<int> &squares,vector<vector<int>> &dp)
    {
        if(sum==0)
        {
            return 0;
        }
        if(n<=0 || sum<0)
        {
            return 1e9;
        }
        if(dp[n][sum]!=-1)
        {
            return dp[n][sum];
        }
        return dp[n][sum]=min(1+possible(n,sum-squares[n-1],squares,dp),possible(n-1,sum,squares,dp));
    }
    int numSquares(int n) {
        vector<int> squares;
        int i=1;
        while((i*i)<=n)
        {
            squares.push_back(i*i);
            i++;
        }
        //subset sum problem with returning the minimum subset possible and repetition is allowed.
        vector<vector<int>> dp(squares.size()+1,vector<int>(n+1,-1));
        int x=possible(squares.size(),n,squares,dp);
        return x;
    }
};