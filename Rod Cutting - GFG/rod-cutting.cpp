// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cuttingrod(int price[],int n,int W,vector<vector<int>> &dp)
    {
        if(W<=0)
        {
            return 0;
        }
        if(n==0)
        {
            return 0;
        }
        if(dp[n][W]!=-1)
        {
            return dp[n][W];
        }
        if((W-n)>=0)
        {
            return dp[n][W]=max(price[n-1]+cuttingrod(price,n,W-n,dp),cuttingrod(price,n-1,W,dp));
        }
        return dp[n][W]=cuttingrod(price,n-1,W,dp);
    }
    int cutRod(int price[], int n) {
        //code here
        int W=n;
       vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
        return cuttingrod(price,n,W,dp);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends