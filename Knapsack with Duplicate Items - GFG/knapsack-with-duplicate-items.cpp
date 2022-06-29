// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knap(int W,int wt[],int val[],int n,vector<vector<int>> &dp)
    {
        if(n==0)
        {
            return 0;
        }
        if(n>=0 && W>=0 &&dp[n][W]!=-1)
        {
            return dp[n][W];
        }
        if((W-wt[n-1])>=0)
        {
            return dp[n][W]=max(val[n-1]+knap(W-wt[n-1],wt,val,n,dp),knap(W,wt,val,n-1,dp));
        }
        return knap(W,wt,val,n-1,dp);
    }
    int knapSack(int n, int W, int val[], int wt[])
    {
        // code here
       vector<int> dp(W+1,0);
       for(int i=0;i<=W;i++)
       {
           if(i>=wt[0])
           {
               dp[i]=val[0]+dp[i-wt[0]];
           }
       }
       for(int i=1;i<n;i++)
       {
           for(int j=0;j<=W;j++)
           {
               int nottake=dp[j];
               if(j>=wt[i])
               {
                  dp[j]=max(val[i]+dp[j-wt[i]],nottake); 
               }
               else
               {
                   dp[j]=dp[j];
               }
           }
       }
       return dp[W];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends