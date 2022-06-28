// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int solve(int W,int wt[],int val[],int n,vector<vector<int>> &dp)
    {
        if(W<0)
        {
            return 0;
        }
        if(n<0)
        {
            return 0;
        }
        if(dp[n][W]!=-1)
        {
            return dp[n][W];
        }
        if((W-wt[n])>=0)
        {
            return dp[n][W]=max(val[n]+solve(W-wt[n],wt,val,n-1,dp),solve(W,wt,val,n-1,dp));
        }
        return dp[n][W]=solve(W,wt,val,n-1,dp);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n+1,vector<int>(W+1,0));
          for(int i=0;i<=W;i++)
          {
              if(i>=wt[0])
              {
                  dp[0][i]=val[0];
              }
          }
       for(int i=1;i<n;i++)
       {
           for(int j=0;j<=W;j++)
           {
               if((j-wt[i])>=0)
               {
                   dp[i][j]=max(val[i]+dp[i-1][j-wt[i]],dp[i-1][j]);
               }
               else
               {
                   dp[i][j]=dp[i-1][j];
               }
           }
       }
       return dp[n-1][W];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends