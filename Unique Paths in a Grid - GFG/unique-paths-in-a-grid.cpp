//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int n;
    int m;
    typedef long long ll;
    vector<vector<ll>> dp;
    const int mod=1e9+7;
    ll solve(int i,int j, vector<vector<int>> &grid)
    {
        if(i>=n)
        {
            return 0;
        }
        if(j>=m)
        {
            return 0;
        }
        if(grid[i][j]==0)
        {
            return 0;
        }
        if(i==n-1 && j==m-1)
        {
            return 1ll;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j]=((solve(i+1,j,grid))%mod+(solve(i,j+1,grid))%mod)%mod;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        this->n=n;
        this->m=m;
        dp.resize(n,vector<ll>(m,-1));
        return solve(0,0,grid);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends