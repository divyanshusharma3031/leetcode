//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int dp[1001][1001];
    int solve(int i,int j,string &A,string &B)
    {
        int n=A.size();
        int m=B.size();
        if(i==n || j==m)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(A[i]==B[j])
        {
            return 1+solve(i+1,j+1,A,B);
        }
        return dp[i][j]=max(solve(i+1,j,A,B),solve(i,j+1,A,B));
    }
    int longestPalinSubseq(string A) {
        //code here
        memset(dp,-1,sizeof(dp));
        string B=A;
        reverse(B.begin(),B.end());
        return solve(0,0,A,B);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends