// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int LCSof3 (string A, string B, string C, int n1, int n2, int n3);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        cout << LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int LCS(string &A,string &B,string &C,int n1,int n2,int n3,vector<vector<vector<int>>> &dp)
{
    if(n3<=0)
    {
        return 0;
    }
    if(n1<=0 || n2<=0)
    {
        return 0;
    }
    if(dp[n1][n2][n3]!=-1)
    {
        return dp[n1][n2][n3];
    }
    if((A[n1-1]==B[n2-1]) && (B[n2-1]==C[n3-1]))
    {
        return dp[n1][n2][n3]=1+LCS(A,B,C,n1-1,n2-1,n3-1,dp);
    }
    
    int p1=LCS(A,B,C,n1-1,n2,n3,dp);
    int p2=LCS(A,B,C,n1,n2-1,n3,dp);
    int p3=LCS(A,B,C,n1,n2,n3-1,dp);
    return dp[n1][n2][n3]=max({p1,p2,p3});
}

int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    // your code here
     vector<vector<vector<int>>> dp(n1+1,vector<vector<int>>(n2+1,vector<int>(n3+1,-1)));;
    return LCS(A,B,C,n1,n2,n3,dp);
}