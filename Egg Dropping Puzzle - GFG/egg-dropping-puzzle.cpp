//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int dp[201][201];
    int solve(int n,int k)
    {
        if(k<=0)
        {
            return 0;
        }
        if(k==1)
        {
            return 1;
        }
        if(n==1)
        {
            return k;
        }
        if(dp[n][k]!=-1)
        {
            return dp[n][k];
        }
        int ans=1e9;
        for(int i=1;i<=k;i++)
        {
            ans=min({ans,max(1+solve(n-1,i-1),1+solve(n,k-i))});
        }
        return dp[n][k]=ans;
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        memset(dp,-1,sizeof(dp));
        if(n==1)
        {
            return k;
        }
        return solve(n,k);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends