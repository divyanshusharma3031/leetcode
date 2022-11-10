//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#include<bits/stdc++.h>
class Solution{
public:
    int dp[501][501]; 
    int solve(int i,int j,vector<vector<int>> &matrix)
    {
        int n=matrix.size();
        if(i<0 || i>=n || j<0 || j>=n)
        {
            return -1e9;
        }
        if(i==n-1)
        {
            return matrix[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j]=max({matrix[i][j]+solve(i+1,j,matrix),matrix[i][j]+solve(i+1,j-1,matrix),matrix[i][j]+solve(i+1,j+1,matrix)});
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int ans=-1;
        for(int i=0;i<N;i++)
        {
            ans=max(ans,solve(0,i,Matrix));
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends