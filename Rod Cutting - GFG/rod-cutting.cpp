// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int solve(int price[],int n,vector<int> &dp)
  {
      if(n==0)
      {
          return 0;
      }
      int mx=-1e9;
      if(dp[n]!=-1)
      {
          return dp[n];
      }
      for(int i=0;i<n;i++)
      {
          if((n-(i+1))>=0)
          {
             mx=max(mx,price[i]+solve(price,n-i-1,dp));
          }
      }
      return dp[n]=mx;
  }
    int cutRod(int price[], int n) {
        //code here
        int mx=-1e9;
        vector<int> dp(n+1,-1);
        for(int i=0;i<n;i++)
        {
            mx=max(mx,price[i]+solve(price,n-i-1,dp));
        }
        return mx;
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